#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c2b0);

#define public_6d563cd _public_6d563cd
#define public_6d5641c _public_6d5641c
#define public_6d56424 _public_6d56424
#define public_6d56431 _public_6d56431
#define public_6d56458 _public_6d56458

PROC_DECLARE(0x6d563a0, internal_6d563a0, public_6d563a0);
extern "C" NAKED register_t __cdecl internal_6d563a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [public_6d90260]
        mov ecx, eax
        imul ecx, 0x418
        push esi
        push edi
        lea edi, ds:[ecx+edx]
        mov ecx, dword ptr ds : [edi-0x14]
        test ecx, ecx
        je public_6d563cd
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6d5c2b0
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6d563cd : nop
        test eax, eax
        jbe public_6d56458
        mov ecx, dword ptr ds : [public_6d90264]
        dec eax
        cmp eax, ecx
        jae public_6d56458
        imul eax, 0x418
        mov ecx, dword ptr ds : [eax+edx+0x348]
        test ecx, ecx
        je public_6d56458
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [edi-0xF8], eax
        mov esi, dword ptr ds : [edi-0xFC]
        add esi, eax
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d5641c
        mov dl, byte ptr ds : [edi-0x3B4]
        test dl, dl
        setne al
        test al, al
        je public_6d56458
        public_6d5641c : nop
        test esi, esi
        jge public_6d56424
        xor esi, esi
        jmp public_6d56431
        public_6d56424 : nop
        cmp esi, 0x3B9AC9FF
        jle public_6d56431
        mov esi, 0x3B9AC9FF
        public_6d56431 : nop
        mov dword ptr ds : [edi-0xFC], esi
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push esi
        add edi, 0xFFFFFF30
        push edi
        call dword ptr ds : [eax+0x134]
        push edi
        push 0
        call public_6d43650
        add esp, 8
        public_6d56458 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d563a0)
    }
}

#undef public_6d563cd
#undef public_6d5641c
#undef public_6d56424
#undef public_6d56431
#undef public_6d56458
