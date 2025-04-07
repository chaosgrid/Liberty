#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb9c60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb9c71 _public_6eb9c71
#define public_6eb9c97 _public_6eb9c97
#define public_6eb9cc0 _public_6eb9cc0
#define public_6eb9cc2 _public_6eb9cc2
#define public_6eb9ccb _public_6eb9ccb

PROC_DECLARE(0x6eb9c60, internal_6eb9c60, public_6eb9c60);
extern "C" NAKED register_t __cdecl internal_6eb9c60()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x1FC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eb9ccb
        push edi
        public_6eb9c71 : nop
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jp public_6eb9cc0
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_6eb9c97
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_6eb9c97 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx], edi
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [edx+4], eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+0x200]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0x200], eax
        mov esi, edi
        jmp public_6eb9cc2
        public_6eb9cc0 : nop
        mov esi, dword ptr ds : [esi]
        public_6eb9cc2 : nop
        cmp esi, dword ptr ds : [ebx+0x1FC]
        jne public_6eb9c71
        pop edi
        public_6eb9ccb : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb9c60)
    }
}

#undef public_6eb9c71
#undef public_6eb9c97
#undef public_6eb9cc0
#undef public_6eb9cc2
#undef public_6eb9ccb
