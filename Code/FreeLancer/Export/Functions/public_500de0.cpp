#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_500de0);
CLANG_FORWARD_PROC_SYMBOL(public_5012e0);
CLANG_FORWARD_PROC_SYMBOL(public_5018a0);

#define public_500e17 _public_500e17
#define public_500e22 _public_500e22
#define public_500e40 _public_500e40
#define public_500e54 _public_500e54
#define public_500e58 _public_500e58
#define public_500e8f _public_500e8f
#define public_500ea7 _public_500ea7
#define public_500ecc _public_500ecc
#define public_500ed7 _public_500ed7
#define public_500ef0 _public_500ef0
#define public_500f04 _public_500f04
#define public_500f08 _public_500f08
#define public_500f3f _public_500f3f
#define public_500f57 _public_500f57
#define public_500f7c _public_500f7c
#define public_500f87 _public_500f87
#define public_500fa6 _public_500fa6
#define public_500fba _public_500fba
#define public_500fc0 _public_500fc0
#define public_500ff7 _public_500ff7
#define public_501016 _public_501016
#define public_501079 _public_501079

PROC_DECLARE(0x500de0, internal_500de0, public_500de0);
extern "C" NAKED register_t __cdecl internal_500de0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        jle public_501016
        mov eax, dword ptr ds : [public_61325c]
        mov ecx, dword ptr ds : [public_613254]
        mov edx, dword ptr ds : [public_613258]
        add ecx, eax
        mov eax, dword ptr ds : [esi+0x1BC]
        test eax, eax
        lea edx, ds:[ecx+edx+1]
        jne public_500e17
        xor ebx, ebx
        jmp public_500e22
        public_500e17 : nop
        mov ebx, dword ptr ds : [esi+0x1C0]
        sub ebx, eax
        sar ebx, 2
        public_500e22 : nop
        cmp edx, 8
        jl public_500ea7
        cmp ebx, 8
        jl public_500ea7
        xor edi, edi
        test edx, edx
        jle public_500e54
        mov ecx, ebx
        sub ecx, edx
        shl ecx, 2
        lea ecx, ds:[ecx]
        public_500e40 : nop
        mov eax, dword ptr ds : [esi+0x1BC]
        mov ebp, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax+edi*4], ebp
        inc edi
        add ecx, 4
        cmp edi, edx
        jl public_500e40
        public_500e54 : nop
        cmp edi, ebx
        jge public_500e8f
        public_500e58 : nop
        mov ebp, dword ptr ds : [esi+0x1BC]
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        inc edi
        cmp edi, ebx
        fmul dword ptr ds : [public_5da778]
        fld dword ptr ds : [esi+0x1DC]
        fsub dword ptr ds : [esi+0x1D8]
        fmulp 
        fadd dword ptr ds : [esi+0x1D8]
        fstp dword ptr ss : [ebp+edi*4-4]
        jl public_500e58
        public_500e8f : nop
        mov ecx, dword ptr ds : [esi+0x1BC]
        lea eax, ds:[esi+0x1C8]
        push eax
        dec ebx
        push ebx
        push ecx
        call public_5018a0
        add esp, 0xC
        public_500ea7 : nop
        mov eax, dword ptr ds : [public_61325c]
        mov edx, dword ptr ds : [public_613254]
        mov ecx, dword ptr ds : [public_613258]
        add edx, eax
        mov eax, dword ptr ds : [esi+0x1E4]
        test eax, eax
        lea edx, ds:[edx+ecx+1]
        jne public_500ecc
        xor ebx, ebx
        jmp public_500ed7
        public_500ecc : nop
        mov ebx, dword ptr ds : [esi+0x1E8]
        sub ebx, eax
        sar ebx, 2
        public_500ed7 : nop
        cmp edx, 8
        jl public_500f57
        cmp ebx, 8
        jl public_500f57
        xor edi, edi
        test edx, edx
        jle public_500f04
        mov ecx, ebx
        sub ecx, edx
        shl ecx, 2
        mov edi, edi
        public_500ef0 : nop
        mov eax, dword ptr ds : [esi+0x1E4]
        mov ebp, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax+edi*4], ebp
        inc edi
        add ecx, 4
        cmp edi, edx
        jl public_500ef0
        public_500f04 : nop
        cmp edi, ebx
        jge public_500f3f
        public_500f08 : nop
        mov ebp, dword ptr ds : [esi+0x1E4]
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        inc edi
        cmp edi, ebx
        fmul dword ptr ds : [public_5da778]
        fld dword ptr ds : [esi+0x204]
        fsub dword ptr ds : [esi+0x200]
        fmulp 
        fadd dword ptr ds : [esi+0x200]
        fstp dword ptr ss : [ebp+edi*4-4]
        jl public_500f08
        public_500f3f : nop
        mov eax, dword ptr ds : [esi+0x1E4]
        lea edx, ds:[esi+0x1F0]
        push edx
        dec ebx
        push ebx
        push eax
        call public_5018a0
        add esp, 0xC
        public_500f57 : nop
        mov edx, dword ptr ds : [public_61325c]
        mov ecx, dword ptr ds : [public_613254]
        mov eax, dword ptr ds : [public_613258]
        add ecx, edx
        lea edx, ds:[ecx+eax+1]
        mov eax, dword ptr ds : [esi+0x20C]
        test eax, eax
        jne public_500f7c
        xor ebx, ebx
        jmp public_500f87
        public_500f7c : nop
        mov ebx, dword ptr ds : [esi+0x210]
        sub ebx, eax
        sar ebx, 2
        public_500f87 : nop
        cmp edx, 8
        jl public_501079
        cmp ebx, 8
        jl public_501079
        xor edi, edi
        test edx, edx
        jle public_500fba
        mov ecx, ebx
        sub ecx, edx
        shl ecx, 2
        public_500fa6 : nop
        mov eax, dword ptr ds : [esi+0x20C]
        mov ebp, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax+edi*4], ebp
        inc edi
        add ecx, 4
        cmp edi, edx
        jl public_500fa6
        public_500fba : nop
        cmp edi, ebx
        jge public_500ff7
        mov edi, edi
        public_500fc0 : nop
        mov ebp, dword ptr ds : [esi+0x20C]
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        inc edi
        cmp edi, ebx
        fmul dword ptr ds : [public_5da778]
        fld dword ptr ds : [esi+0x22C]
        fsub dword ptr ds : [esi+0x228]
        fmulp 
        fadd dword ptr ds : [esi+0x228]
        fstp dword ptr ss : [ebp+edi*4-4]
        jl public_500fc0
        public_500ff7 : nop
        mov edx, dword ptr ds : [esi+0x20C]
        lea ecx, ds:[esi+0x218]
        push ecx
        dec ebx
        push ebx
        push edx
        call public_5018a0
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_501016 : nop
        mov eax, dword ptr ds : [esi+0xBC]
        mov ecx, dword ptr ds : [esi+0xB0]
        mov edx, dword ptr ds : [esi+0x78]
        push 0
        push 0
        push eax
        push ecx
        push edx
        lea ecx, ds:[esi+0x1B8]
        call public_5012e0
        mov eax, dword ptr ds : [esi+0xC0]
        mov ecx, dword ptr ds : [esi+0xB4]
        mov edx, dword ptr ds : [esi+0x78]
        push 0
        push 0
        push eax
        push ecx
        push edx
        lea ecx, ds:[esi+0x1E0]
        call public_5012e0
        mov eax, dword ptr ds : [esi+0xC4]
        mov ecx, dword ptr ds : [esi+0xB8]
        mov edx, dword ptr ds : [esi+0x78]
        push 0
        push 0
        push eax
        push ecx
        push edx
        lea ecx, ds:[esi+0x208]
        call public_5012e0
        public_501079 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x500de0)
    }
}

#undef public_500e17
#undef public_500e22
#undef public_500e40
#undef public_500e54
#undef public_500e58
#undef public_500e8f
#undef public_500ea7
#undef public_500ecc
#undef public_500ed7
#undef public_500ef0
#undef public_500f04
#undef public_500f08
#undef public_500f3f
#undef public_500f57
#undef public_500f7c
#undef public_500f87
#undef public_500fa6
#undef public_500fba
#undef public_500fc0
#undef public_500ff7
#undef public_501016
#undef public_501079
