#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ecab0);
CLANG_FORWARD_PROC_SYMBOL(public_62ecad0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62cc048 _public_62cc048
#define public_62cc075 _public_62cc075
#define public_62cc077 _public_62cc077
#define public_62cc07e _public_62cc07e
#define public_62cc08a _public_62cc08a
#define public_62cc091 _public_62cc091
#define public_62cc0a3 _public_62cc0a3
#define public_62cc0b8 _public_62cc0b8

PROC_DECLARE(0x62cc030, internal_62cc030, public_62cc030);
extern "C" NAKED register_t __cdecl internal_62cc030()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x285]
        test al, al
        mov ebx, 2
        je public_62cc048
        mov ebx, 1
        public_62cc048 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push edi
        add ecx, 0x1364
        call public_62ecad0
        test eax, eax
        jne public_62cc07e
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        call public_62ecab0
        test eax, eax
        lea edi, ds:[esi+0x2C]
        je public_62cc075
        add eax, 8
        jmp public_62cc077
        public_62cc075 : nop
        xor eax, eax
        public_62cc077 : nop
        cmp eax, dword ptr ds : [edi]
        je public_62cc091
        push eax
        jmp public_62cc08a
        public_62cc07e : nop
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        lea edi, ds:[esi+0x2C]
        je public_62cc091
        push 0
        public_62cc08a : nop
        mov ecx, edi
        call public_6341610
        public_62cc091 : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        je public_62cc0a3
        lea eax, ds:[edi-8]
        test eax, eax
        je public_62cc0a3
        mov ebx, 1
        public_62cc0a3 : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        pop edi
        je public_62cc0b8
        mov eax, 3
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebx
        ret 4
        public_62cc0b8 : nop
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62cc030)
    }
}

#undef public_62cc048
#undef public_62cc075
#undef public_62cc077
#undef public_62cc07e
#undef public_62cc08a
#undef public_62cc091
#undef public_62cc0a3
#undef public_62cc0b8
