#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4032a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4032a4 _public_4032a4
#define public_4032b9 _public_4032b9
#define public_4032bd _public_4032bd
#define public_4032cb _public_4032cb
#define public_4032d1 _public_4032d1
#define public_4032e3 _public_4032e3
#define public_4032e5 _public_4032e5
#define public_4032f3 _public_4032f3
#define public_403308 _public_403308
#define public_40330c _public_40330c
#define public_40331a _public_40331a
#define public_403320 _public_403320
#define public_403340 _public_403340

PROC_DECLARE(0x4032a0, internal_4032a0, public_4032a0);
extern "C" NAKED register_t __cdecl internal_4032a0()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        public_4032a4 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_4032f3
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_4032b9
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_4032bd
        public_4032b9 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_4032bd : nop
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        jne public_4032cb
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x14], ecx
        jmp public_4032d1
        public_4032cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        public_4032d1 : nop
        dec dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ds : [esi+8], eax
        jne public_4032e3
        mov dword ptr ds : [esi+4], eax
        jmp public_4032e5
        public_4032e3 : nop
        mov dword ptr ds : [ecx], eax
        public_4032e5 : nop
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], ecx
        inc dword ptr ds : [esi+0xC]
        jmp public_4032a4
        public_4032f3 : nop
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_403340
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_403308
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi+4], eax
        jmp public_40330c
        public_403308 : nop
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        public_40330c : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        jne public_40331a
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+8], edx
        jmp public_403320
        public_40331a : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], ecx
        public_403320 : nop
        dec dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [edi+0x14]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_5b7e1d
        push edi
        call public_5b7e1d
        add esp, 0xC
        jmp public_4032f3
        public_403340 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4032a0)
    }
}

#undef public_4032a4
#undef public_4032b9
#undef public_4032bd
#undef public_4032cb
#undef public_4032d1
#undef public_4032e3
#undef public_4032e5
#undef public_4032f3
#undef public_403308
#undef public_40330c
#undef public_40331a
#undef public_403320
#undef public_403340
