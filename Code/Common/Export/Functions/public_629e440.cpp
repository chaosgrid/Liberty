#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ae00);
CLANG_FORWARD_PROC_SYMBOL(public_629dc40);

#define public_629e460 _public_629e460
#define public_629e470 _public_629e470
#define public_629e47e _public_629e47e
#define public_629e487 _public_629e487

PROC_DECLARE(0x629e440, internal_629e440, public_629e440);
extern "C" NAKED register_t __cdecl internal_629e440()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0xC]
        test al, al
        mov ebp, dword ptr ss : [esp+0x14]
        je public_629e487
        mov esi, dword ptr ds : [edi+0x54]
        mov eax, dword ptr ds : [edi+0x58]
        xor ebx, ebx
        cmp esi, eax
        je public_629e47e
        nop 
        public_629e460 : nop
        push ebp
        mov ecx, esi
        call public_629dc40
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_629e470
        inc ebx
        public_629e470 : nop
        mov eax, dword ptr ds : [edi+0x58]
        add esi, 0x24
        cmp esi, eax
        jne public_629e460
        test ebx, ebx
        jne public_629e487
        public_629e47e : nop
        mov edx, dword ptr ds : [edi]
        push 0
        mov ecx, edi
        call dword ptr ds : [edx+0x30]
        public_629e487 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ebp
        mov ecx, edi
        call public_629ae00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x629e440)
    }
}

#undef public_629e460
#undef public_629e470
#undef public_629e47e
#undef public_629e487
