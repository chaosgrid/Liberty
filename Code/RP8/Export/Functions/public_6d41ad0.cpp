#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d416f7);
CLANG_FORWARD_PROC_SYMBOL(public_6d41ad0);

#define public_6d41b04 _public_6d41b04
#define public_6d41b0c _public_6d41b0c
#define public_6d41b16 _public_6d41b16
#define public_6d41b5b _public_6d41b5b
#define public_6d41b63 _public_6d41b63
#define public_6d41b97 _public_6d41b97
#define public_6d41bad _public_6d41bad
#define public_6d41bb1 _public_6d41bb1
#define public_6d41bb8 _public_6d41bb8
#define public_6d41bba _public_6d41bba

PROC_DECLARE(0x6d41ad0, internal_6d41ad0, public_6d41ad0);
extern "C" NAKED register_t __cdecl internal_6d41ad0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ds : [esi+0x178]
        mov dword ptr ds : [eax+0x14], 0x75
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], edi
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x1C], ebp
        mov eax, dword ptr ds : [esi]
        push 0xFFFFFFFF
        push esi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        mov ebx, 0xD0
        public_6d41b04 : nop
        cmp edi, 0xC0
        jge public_6d41b16
        public_6d41b0c : nop
        mov dword ptr ss : [esp+0x14], 2
        jmp public_6d41b63
        public_6d41b16 : nop
        cmp edi, ebx
        jl public_6d41b5b
        cmp edi, 0xD7
        jg public_6d41b5b
        push 7
        lea ecx, ss:[ebp+1]
        pop eax
        and ecx, eax
        add ecx, ebx
        cmp edi, ecx
        je public_6d41b5b
        lea ecx, ss:[ebp+2]
        and ecx, eax
        add ecx, ebx
        cmp edi, ecx
        je public_6d41b5b
        lea ecx, ss:[ebp-1]
        and ecx, eax
        add ecx, ebx
        cmp edi, ecx
        je public_6d41b0c
        lea ecx, ss:[ebp-2]
        and ecx, eax
        add ecx, ebx
        cmp edi, ecx
        je public_6d41b0c
        mov dword ptr ss : [esp+0x14], 1
        jmp public_6d41b63
        public_6d41b5b : nop
        mov dword ptr ss : [esp+0x14], 3
        public_6d41b63 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x14], 0x60
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], edi
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x1C], ecx
        mov eax, dword ptr ds : [esi]
        push 4
        push esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x1C]
        dec eax
        pop ecx
        pop ecx
        je public_6d41bb1
        dec eax
        je public_6d41b97
        dec eax
        jne public_6d41b04
        jmp public_6d41bb8
        public_6d41b97 : nop
        push esi
        call public_6d416f7
        test al, al
        pop ecx
        je public_6d41bad
        mov edi, dword ptr ds : [esi+0x178]
        jmp public_6d41b04
        public_6d41bad : nop
        xor al, al
        jmp public_6d41bba
        public_6d41bb1 : nop
        and dword ptr ds : [esi+0x178], 0
        public_6d41bb8 : nop
        mov al, 1
        public_6d41bba : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d41ad0)
    }
}

#undef public_6d41b04
#undef public_6d41b0c
#undef public_6d41b16
#undef public_6d41b5b
#undef public_6d41b63
#undef public_6d41b97
#undef public_6d41bad
#undef public_6d41bb1
#undef public_6d41bb8
#undef public_6d41bba
