#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59de50);

#define public_59de71 _public_59de71
#define public_59deb1 _public_59deb1
#define public_59dec0 _public_59dec0
#define public_59dec8 _public_59dec8
#define public_59ded0 _public_59ded0
#define public_59deeb _public_59deeb
#define public_59df06 _public_59df06
#define public_59df14 _public_59df14
#define public_59df18 _public_59df18
#define public_59df2d _public_59df2d

PROC_DECLARE(0x59de50, internal_59de50, public_59de50);
extern "C" NAKED register_t __cdecl internal_59de50()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_67dbe8]
        push ebx
        push ebp
        xor ebx, ebx
        or ebp, 0xFFFFFFFF
        test eax, eax
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], eax
        je public_59df2d
        push esi
        push edi
        public_59de71 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+8]
        test esi, esi
        je public_59df18
        mov al, byte ptr ds : [esi+0x6C]
        test al, 1
        je public_59df18
        test al, 2
        je public_59df18
        test al, 8
        je public_59df18
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        test al, al
        jne public_59deb1
        cmp esi, dword ptr ss : [esp+0x1C]
        jne public_59df18
        public_59deb1 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x6C]
        mov edi, eax
        test edi, edi
        jne public_59dec8
        mov eax, esi
        public_59dec0 : nop
        mov eax, dword ptr ds : [eax+4]
        inc edi
        test eax, eax
        jne public_59dec0
        public_59dec8 : nop
        cmp edi, ebp
        jle public_59deeb
        mov eax, esi
        mov edi, edi
        public_59ded0 : nop
        test byte ptr ds : [eax+0x6C], 2
        je public_59df18
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_59ded0
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        jmp public_59df06
        public_59deeb : nop
        jne public_59df18
        fld dword ptr ds : [esi+0x68]
        fcomp dword ptr ds : [ebx+0x68]
        fnstsw ax
        test ah, 0x41
        jne public_59df18
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        public_59df06 : nop
        test al, al
        je public_59df14
        mov ebx, esi
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, edi
        jmp public_59df18
        public_59df14 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_59df18 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_59de71
        pop edi
        pop esi
        public_59df2d : nop
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x59de50)
    }
}

#undef public_59de71
#undef public_59deb1
#undef public_59dec0
#undef public_59dec8
#undef public_59ded0
#undef public_59deeb
#undef public_59df06
#undef public_59df14
#undef public_59df18
#undef public_59df2d
