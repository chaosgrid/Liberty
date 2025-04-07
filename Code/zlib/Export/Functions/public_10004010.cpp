#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004010);
CLANG_FORWARD_PROC_SYMBOL(public_10005480);

#define public_10004023 _public_10004023
#define public_10004033 _public_10004033
#define public_10004041 _public_10004041
#define public_10004053 _public_10004053
#define public_10004085 _public_10004085

PROC_DECLARE(0x10004010, internal_10004010, public_10004010);
extern "C" NAKED register_t __cdecl internal_10004010()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        je public_10004023
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [eax], ecx
        public_10004023 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 4
        mov edi, dword ptr ss : [esp+0x10]
        je public_10004033
        cmp eax, 5
        jne public_10004041
        public_10004033 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edi+0x28]
        push edx
        push eax
        call dword ptr ds : [edi+0x24]
        add esp, 8
        public_10004041 : nop
        cmp dword ptr ds : [esi], 6
        jne public_10004053
        mov ecx, dword ptr ds : [esi+4]
        push edi
        push ecx
        call public_10005480
        add esp, 8
        public_10004053 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x30], eax
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0x1C], 0
        mov dword ptr ds : [esi+0x20], 0
        je public_10004085
        push 0
        push 0
        push 0
        call eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [edi+0x30], eax
        public_10004085 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10004010)
    }
}

#undef public_10004023
#undef public_10004033
#undef public_10004041
#undef public_10004053
#undef public_10004085
