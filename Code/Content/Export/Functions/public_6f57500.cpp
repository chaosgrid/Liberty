#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57500);

#define public_6f57525 _public_6f57525
#define public_6f57549 _public_6f57549
#define public_6f57560 _public_6f57560
#define public_6f57583 _public_6f57583

PROC_DECLARE(0x6f57500, internal_6f57500, public_6f57500);
extern "C" NAKED register_t __cdecl internal_6f57500()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x140]
        mov eax, dword ptr ds : [edi+0x144]
        xor ebx, ebx
        xor ebp, ebp
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x14], ebp
        je public_6f57583
        public_6f57525 : nop
        push esi
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6f57549
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 1
        jne public_6f57549
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], eax
        public_6f57549 : nop
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 1
        jne public_6f57560
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6f57560 : nop
        mov eax, dword ptr ds : [edi+0x144]
        add esi, 8
        cmp esi, eax
        jne public_6f57525
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov dword ptr ds : [edx], ebp
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        add esp, 0x10
        ret 8
        public_6f57583 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], ebp
        pop ebp
        mov dword ptr ds : [edx], ebx
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f57500)
    }
}

#undef public_6f57525
#undef public_6f57549
#undef public_6f57560
#undef public_6f57583
