#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5470);

#define public_4d01a0 _public_4d01a0
#define public_4d0210 _public_4d0210
#define public_4d0241 _public_4d0241

PROC_DECLARE(0x4d0170, internal_4d0170, public_4d0170);
extern "C" NAKED register_t __cdecl internal_4d0170()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_674b04]
        push 0
        call public_4e5470
        test eax, eax
        je public_4d01a0
        cmp eax, 2
        je public_4d01a0
        mov dword ptr ds : [esi+0x444], 0xFFFFFFFF
        and byte ptr ds : [esi+0xA4], 0xFC
        pop esi
        pop ebx
        ret 8
        public_4d01a0 : nop
        mov dl, byte ptr ds : [esi+0xA4]
        mov cl, 3
        or dl, cl
        mov byte ptr ds : [esi+0xA4], dl
        cmp eax, dword ptr ds : [esi+0x444]
        je public_4d0241
        mov dword ptr ds : [esi+0x444], eax
        cmp eax, 2
        mov eax, dword ptr ds : [esi+0x424]
        mov byte ptr ds : [esi+0x43C], 1
        jne public_4d0210
        mov bl, byte ptr ds : [eax+0x6C]
        mov dl, 0xFC
        and bl, dl
        mov byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x428]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x42C]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x434]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x430]
        and byte ptr ds : [eax+0x6C], dl
        mov esi, dword ptr ds : [esi+0x448]
        or byte ptr ds : [esi+0x6C], cl
        pop esi
        pop ebx
        ret 8
        public_4d0210 : nop
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x428]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x42C]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x430]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x434]
        or byte ptr ds : [eax+0x6C], cl
        mov esi, dword ptr ds : [esi+0x448]
        and byte ptr ds : [esi+0x6C], 0xFC
        public_4d0241 : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4d0170)
    }
}

#undef public_4d01a0
#undef public_4d0210
#undef public_4d0241
