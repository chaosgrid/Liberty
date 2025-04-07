#include "ReadFile-PCH.h"


#define public_6b7508e _public_6b7508e
#define public_6b750a6 _public_6b750a6
#define public_6b750b4 _public_6b750b4
#define public_6b750ca _public_6b750ca
#define public_6b750ed _public_6b750ed
#define public_6b750f9 _public_6b750f9

PROC_DECLARE(0x6b75070, internal_6b75070, public_6b75070);
extern "C" NAKED register_t __cdecl internal_6b75070()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+0x120]
        test eax, eax
        je public_6b750a6
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        jne public_6b7508e
        mov ecx, dword ptr ds : [edi+0x130]
        public_6b7508e : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        jmp public_6b750ca
        public_6b750a6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6b750b4
        mov eax, dword ptr ds : [edi+0x130]
        public_6b750b4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        push ecx
        push eax
        call dword ptr ds : [public_6b79020]
        public_6b750ca : nop
        mov esi, eax
        test esi, esi
        jne public_6b750f9
        mov eax, dword ptr ds : [edi+0x120]
        test eax, eax
        je public_6b750ed
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x78]
        mov dword ptr ds : [edi+0x11C], eax
        mov eax, esi
        pop edi
        pop esi
        ret 0x14
        public_6b750ed : nop
        call dword ptr ds : [public_6b79038]
        mov dword ptr ds : [edi+0x11C], eax
        public_6b750f9 : nop
        mov eax, esi
        pop edi
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x6b75070)
    }
}

#undef public_6b7508e
#undef public_6b750a6
#undef public_6b750b4
#undef public_6b750ca
#undef public_6b750ed
#undef public_6b750f9
