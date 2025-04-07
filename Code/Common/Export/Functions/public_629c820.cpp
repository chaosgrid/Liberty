#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b010);
CLANG_FORWARD_PROC_SYMBOL(public_629c820);

#define public_629c850 _public_629c850
#define public_629c865 _public_629c865
#define public_629c873 _public_629c873
#define public_629c879 _public_629c879
#define public_629c891 _public_629c891
#define public_629c894 _public_629c894
#define public_629c8b9 _public_629c8b9
#define public_629c8cb _public_629c8cb
#define public_629c8d1 _public_629c8d1
#define public_629c8ee _public_629c8ee
#define public_629c909 _public_629c909
#define public_629c911 _public_629c911
#define public_629c923 _public_629c923
#define public_629c93b _public_629c93b

PROC_DECLARE(0x629c820, internal_629c820, public_629c820);
extern "C" NAKED register_t __cdecl internal_629c820()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x70]
        xor ebp, ebp
        push edi
        mov edi, dword ptr ds : [esi+0x64]
        mov dword ptr ss : [esp+0xC], eax
        cmp edi, dword ptr ds : [esi+0x68]
        mov dword ptr ds : [esi+0x70], ebp
        mov dword ptr ds : [esi+0x74], ebp
        mov dword ptr ds : [esi+0x78], ebp
        mov dword ptr ds : [esi+0x7C], ebp
        je public_629c8d1
        push ebx
        lea ebx, ds:[edi+4]
        lea ecx, ds:[ecx]
        public_629c850 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, dword ptr ss : [esp+0x1C]
        jne public_629c879
        mov ecx, dword ptr ds : [esi+0x68]
        cmp ebx, ecx
        mov eax, ebx
        je public_629c873
        mov edx, edi
        sub edx, ebx
        public_629c865 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_629c865
        xor ebp, ebp
        public_629c873 : nop
        add dword ptr ds : [esi+0x68], 0xFFFFFFFC
        jmp public_629c8cb
        public_629c879 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0x70]
        cmp eax, ebp
        je public_629c891
        mov edx, dword ptr ds : [eax+0x84]
        cmp edx, dword ptr ds : [ecx+0x84]
        jge public_629c894
        public_629c891 : nop
        mov dword ptr ds : [esi+0x70], ecx
        public_629c894 : nop
        fld dword ptr ds : [ecx+0xA0]
        fadd dword ptr ds : [esi+0x74]
        fstp dword ptr ds : [esi+0x74]
        fld dword ptr ds : [ecx+0xA4]
        fcomp dword ptr ds : [esi+0x78]
        fnstsw ax
        test ah, 0x41
        jne public_629c8b9
        mov eax, dword ptr ds : [ecx+0xA4]
        mov dword ptr ds : [esi+0x78], eax
        public_629c8b9 : nop
        fld dword ptr ds : [ecx+0x94]
        add edi, 4
        fadd dword ptr ds : [esi+0x7C]
        add ebx, 4
        fstp dword ptr ds : [esi+0x7C]
        public_629c8cb : nop
        cmp edi, dword ptr ds : [esi+0x68]
        jne public_629c850
        pop ebx
        public_629c8d1 : nop
        mov eax, dword ptr ds : [esi+0x70]
        cmp eax, ebp
        je public_629c8ee
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [edx+8]
        je public_629c8ee
        push ebp
        push 0x10
        mov ecx, esi
        call public_629b010
        public_629c8ee : nop
        mov ecx, dword ptr ds : [esi+0x64]
        cmp ecx, ebp
        je public_629c923
        mov eax, dword ptr ds : [esi+0x68]
        sub eax, ecx
        sar eax, 2
        cmp eax, ebp
        je public_629c923
        cmp ecx, ebp
        jne public_629c909
        xor eax, eax
        jmp public_629c911
        public_629c909 : nop
        mov eax, dword ptr ds : [esi+0x68]
        sub eax, ecx
        sar eax, 2
        public_629c911 : nop
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ebp
        fild qword ptr ss : [esp+0xC]
        fdivr dword ptr ds : [esi+0x74]
        fstp dword ptr ds : [esi+0x74]
        public_629c923 : nop
        fld dword ptr ds : [esi+0x7C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_629c93b
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x40]
        public_629c93b : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x629c820)
    }
}

#undef public_629c850
#undef public_629c865
#undef public_629c873
#undef public_629c879
#undef public_629c891
#undef public_629c894
#undef public_629c8b9
#undef public_629c8cb
#undef public_629c8d1
#undef public_629c8ee
#undef public_629c909
#undef public_629c911
#undef public_629c923
#undef public_629c93b
