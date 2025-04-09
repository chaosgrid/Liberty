#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4127d0);
CLANG_FORWARD_PROC_SYMBOL(public_413e80);
CLANG_FORWARD_PROC_SYMBOL(public_414070);
CLANG_FORWARD_PROC_SYMBOL(public_414280);
CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_417620);
CLANG_FORWARD_PROC_SYMBOL(public_537260);

#define public_4140d2 _public_4140d2
#define public_4140f7 _public_4140f7
#define public_4140fe _public_4140fe
#define public_414120 _public_414120
#define public_41413b _public_41413b
#define public_414161 _public_414161
#define public_414165 _public_414165
#define public_414170 _public_414170
#define public_4141a8 _public_4141a8
#define public_4141b5 _public_4141b5
#define public_414228 _public_414228
#define public_414269 _public_414269

PROC_DECLARE(0x414070, internal_414070, public_414070);
extern "C" NAKED register_t __cdecl internal_414070()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, dword ptr ds : [public_6105b0]
        push ebp
        push esi
        push edi
        je public_414269
        mov eax, dword ptr ds : [ebx]
        xor ebp, ebp
        cmp eax, ebp
        jne public_41413b
        call public_417620
        mov ecx, dword ptr ds : [ebx+0x15C]
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [public_616638]
        mov esi, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [public_61663c]
        add esi, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        je public_4140f7
        cmp edi, 0xFFFFFFFF
        jne public_4140d2
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov edi, eax
        public_4140d2 : nop
        lea edx, ds:[edi+1]
        push edx
        mov ecx, esi
        call public_4142a0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi]
        push edi
        push eax
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ds : [esi]
        add esp, 0xC
        mov word ptr ds : [edx+edi*2], bp
        jmp public_4140fe
        public_4140f7 : nop
        mov ecx, esi
        call public_414280
        public_4140fe : nop
        mov esi, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [esi+0x20]
        cmp eax, dword ptr ds : [public_6105b0]
        je public_414120
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebp
        je public_414120
        push eax
        mov ecx, offset public_616640
        call public_413e80
        mov dword ptr ds : [esi+0x14], ebp
        public_414120 : nop
        cmp dword ptr ds : [esi+0x14], ebp
        jne public_41413b
        push ebp
        mov ecx, esi
        call public_4127d0
        cmp dword ptr ds : [esi+0x14], ebp
        jne public_41413b
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx], ebp
        public_41413b : nop
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebp
        je public_414269
        mov eax, dword ptr ds : [public_6105b0]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+0x20]
        cmp ecx, dword ptr ds : [public_6105b0]
        je public_4141a8
        mov esi, dword ptr ds : [edi+0x14]
        cmp esi, ebp
        je public_4141a8
        jmp public_414165
        public_414161 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_414165 : nop
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x14], edx
        lea esp, ss:[esp]
        public_414170 : nop
        mov eax, esi
        mov dword ptr ss : [esp+0x10], eax
        mov esi, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+0x24], ebp
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ds : [eax+0x20], ebp
        mov edx, dword ptr ds : [public_616648]
        push 1
        push edx
        mov ecx, offset public_616640
        call public_537260
        cmp esi, ebp
        jne public_414170
        cmp dword ptr ss : [esp+0x14], ebp
        jne public_414161
        mov dword ptr ds : [edi+0x14], ebp
        public_4141a8 : nop
        cmp dword ptr ds : [edi+0x14], ebp
        jne public_4141b5
        push ebp
        mov ecx, edi
        call public_4127d0
        public_4141b5 : nop
        mov esi, dword ptr ds : [edi+0x14]
        cmp esi, ebp
        je public_414269
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [edi+8]
        lea edx, ds:[ebx+8]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        call dword ptr ds : [eax+0x28]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebp
        fild qword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], ebp
        fidiv dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], 0
        lea eax, ds:[ebx+0x50]
        mov edx, 0x11
        fld dword ptr ds : [public_5c7474]
        public_414228 : nop
        fild dword ptr ds : [ecx]
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], ebp
        fadd dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], ebp
        add ecx, 4
        add eax, 0x10
        dec edx
        fstp dword ptr ss : [esp+0x10]
        fild qword ptr ss : [esp+0x1C]
        fdivr dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [eax-0x14]
        mov dword ptr ds : [eax-0xC], edi
        fst dword ptr ds : [eax-8]
        fld dword ptr ss : [esp+0x14]
        jne public_414228
        fstp st(0)
        fstp st(0)
        public_414269 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x414070)
    }
}

#undef public_4140d2
#undef public_4140f7
#undef public_4140fe
#undef public_414120
#undef public_41413b
#undef public_414161
#undef public_414165
#undef public_414170
#undef public_4141a8
#undef public_4141b5
#undef public_414228
#undef public_414269
