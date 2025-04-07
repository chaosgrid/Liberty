#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6715da0);
CLANG_FORWARD_PROC_SYMBOL(public_6715ec0);

#define public_6715dee _public_6715dee
#define public_6715dfd _public_6715dfd
#define public_6715e12 _public_6715e12
#define public_6715e2a _public_6715e2a
#define public_6715e50 _public_6715e50
#define public_6715e56 _public_6715e56
#define public_6715e5c _public_6715e5c
#define public_6715e94 _public_6715e94
#define public_6715eae _public_6715eae

PROC_DECLARE(0x6715da0, internal_6715da0, public_6715da0);
extern "C" NAKED register_t __cdecl internal_6715da0()
{
    __asm
    {
        sub esp, 8
        push 0
        call dword ptr ds : [public_6717108]
        mov ecx, dword ptr ds : [public_671cfe0]
        mov dword ptr ds : [public_671cfc4], eax
        cmp ecx, eax
        je public_6715eae
        mov edx, eax
        mov dword ptr ds : [public_671cfe0], eax
        and edx, 0xFFFF
        mov ecx, edx
        and ecx, 0x3FF
        sub ecx, 4
        je public_6715e12
        sub ecx, 0xD
        je public_6715dfd
        dec ecx
        je public_6715dee
        mov ecx, dword ptr ds : [public_67190a8]
        mov dword ptr ds : [public_671cf90], ecx
        jmp public_6715e5c
        public_6715dee : nop
        mov edx, dword ptr ds : [public_67190b4]
        mov byte ptr ds : [public_67190a4], 0
        jmp public_6715e56
        public_6715dfd : nop
        mov ecx, dword ptr ds : [public_67190b8]
        mov byte ptr ds : [public_67190a4], 1
        mov dword ptr ds : [public_671cf90], ecx
        jmp public_6715e5c
        public_6715e12 : nop
        shr edx, 0xA
        dec edx
        mov byte ptr ds : [public_67190a4], 1
        je public_6715e50
        dec edx
        je public_6715e2a
        mov edx, dword ptr ds : [public_67190a8]
        jmp public_6715e56
        public_6715e2a : nop
        mov eax, dword ptr ds : [public_67190ac]
        push 0
        mov dword ptr ds : [public_671cf90], eax
        call public_6714bd0
        add esp, 4
        test eax, eax
        mov eax, dword ptr ds : [public_671cfc4]
        sete cl
        mov byte ptr ds : [public_67190a4], cl
        jmp public_6715e5c
        public_6715e50 : nop
        mov edx, dword ptr ds : [public_67190b0]
        public_6715e56 : nop
        mov dword ptr ds : [public_671cf90], edx
        public_6715e5c : nop
        push esi
        push edi
        lea ecx, ss:[esp+8]
        push 8
        push ecx
        and eax, 0xFFFF
        push 0x1004
        push eax
        call dword ptr ds : [public_6717070]
        push 0
        lea edx, ss:[esp+0xC]
        push 0
        push edx
        call public_6715ec0
        mov edi, dword ptr ds : [public_671706c]
        add esp, 0xC
        mov dword ptr ds : [public_671cfc8], eax
        xor esi, esi
        public_6715e94 : nop
        mov eax, dword ptr ds : [public_671cfc8]
        push esi
        push eax
        call edi
        mov byte ptr ds : [esi+public_671b9c8], al
        inc esi
        cmp esi, 0x100
        jl public_6715e94
        pop edi
        pop esi
        public_6715eae : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6715da0)
    }
}

#undef public_6715dee
#undef public_6715dfd
#undef public_6715e12
#undef public_6715e2a
#undef public_6715e50
#undef public_6715e56
#undef public_6715e5c
#undef public_6715e94
#undef public_6715eae
