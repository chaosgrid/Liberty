#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7ef0);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65db1b4);

#define public_65db1d6 _public_65db1d6
#define public_65db1ec _public_65db1ec
#define public_65db20e _public_65db20e
#define public_65db244 _public_65db244
#define public_65db251 _public_65db251
#define public_65db26f _public_65db26f
#define public_65db28f _public_65db28f
#define public_65db29c _public_65db29c
#define public_65db2a2 _public_65db2a2
#define public_65db2a8 _public_65db2a8
#define public_65db2c7 _public_65db2c7
#define public_65db2ea _public_65db2ea
#define public_65db2f4 _public_65db2f4
#define public_65db2f6 _public_65db2f6
#define public_65db315 _public_65db315
#define public_65db31f _public_65db31f
#define public_65db344 _public_65db344
#define public_65db34a _public_65db34a
#define public_65db355 _public_65db355
#define public_65db359 _public_65db359

PROC_DECLARE(0x65db1b4, internal_65db1b4, public_65db1b4);
extern "C" NAKED register_t __cdecl internal_65db1b4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x48
        push ebx
        push esi
        push edi
        push 0x480
        call public_65d8535
        mov esi, eax
        pop ecx
        test esi, esi
        jne public_65db1d6
        push 0x1B
        call public_65d7ef0
        pop ecx
        public_65db1d6 : nop
        mov dword ptr ds : [public_65e7940], esi
        mov dword ptr ds : [public_65e7a40], 0x20
        lea eax, ds:[esi+0x480]
        public_65db1ec : nop
        cmp esi, eax
        jae public_65db20e
        and byte ptr ds : [esi+4], 0
        or dword ptr ds : [esi], 0xFFFFFFFF
        and dword ptr ds : [esi+8], 0
        mov byte ptr ds : [esi+5], 0xA
        mov eax, dword ptr ds : [public_65e7940]
        add esi, 0x24
        add eax, 0x480
        jmp public_65db1ec
        public_65db20e : nop
        lea eax, ss:[ebp-0x48]
        push eax
        call dword ptr ds : [public_65e10a4]
        cmp word ptr ss : [ebp-0x16], 0
        je public_65db2f4
        mov eax, dword ptr ss : [ebp-0x14]
        test eax, eax
        je public_65db2f4
        mov edi, dword ptr ds : [eax]
        lea ebx, ds:[eax+4]
        lea eax, ds:[ebx+edi]
        mov dword ptr ss : [ebp-4], eax
        mov eax, 0x800
        cmp edi, eax
        jl public_65db244
        mov edi, eax
        public_65db244 : nop
        cmp dword ptr ds : [public_65e7a40], edi
        jge public_65db2a2
        mov esi, offset public_65e7944
        public_65db251 : nop
        push 0x480
        call public_65d8535
        test eax, eax
        pop ecx
        je public_65db29c
        add dword ptr ds : [public_65e7a40], 0x20
        mov dword ptr ds : [esi], eax
        lea ecx, ds:[eax+0x480]
        public_65db26f : nop
        cmp eax, ecx
        jae public_65db28f
        and byte ptr ds : [eax+4], 0
        or dword ptr ds : [eax], 0xFFFFFFFF
        and dword ptr ds : [eax+8], 0
        mov byte ptr ds : [eax+5], 0xA
        mov ecx, dword ptr ds : [esi]
        add eax, 0x24
        add ecx, 0x480
        jmp public_65db26f
        public_65db28f : nop
        add esi, 4
        cmp dword ptr ds : [public_65e7a40], edi
        jl public_65db251
        jmp public_65db2a2
        public_65db29c : nop
        mov edi, dword ptr ds : [public_65e7a40]
        public_65db2a2 : nop
        xor esi, esi
        test edi, edi
        jle public_65db2f4
        public_65db2a8 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, 0xFFFFFFFF
        je public_65db2ea
        mov al, byte ptr ds : [ebx]
        test al, 1
        je public_65db2ea
        test al, 8
        jne public_65db2c7
        push ecx
        call dword ptr ds : [public_65e10a0]
        test eax, eax
        je public_65db2ea
        public_65db2c7 : nop
        mov ecx, esi
        mov eax, esi
        sar ecx, 5
        and eax, 0x1F
        mov ecx, dword ptr ds : [ecx*4+public_65e7940]
        lea eax, ds:[eax+eax*8]
        lea eax, ds:[ecx+eax*4]
        mov ecx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ecx
        mov cl, byte ptr ds : [ebx]
        mov byte ptr ds : [eax+4], cl
        public_65db2ea : nop
        add dword ptr ss : [ebp-4], 4
        inc esi
        inc ebx
        cmp esi, edi
        jl public_65db2a8
        public_65db2f4 : nop
        xor ebx, ebx
        public_65db2f6 : nop
        mov ecx, dword ptr ds : [public_65e7940]
        lea eax, ds:[ebx+ebx*8]
        cmp dword ptr ds : [ecx+eax*4], 0xFFFFFFFF
        lea esi, ds:[ecx+eax*4]
        jne public_65db355
        test ebx, ebx
        mov byte ptr ds : [esi+4], 0x81
        jne public_65db315
        push 0xFFFFFFF6
        pop eax
        jmp public_65db31f
        public_65db315 : nop
        mov eax, ebx
        dec eax
        neg eax
        sbb eax, eax
        add eax, 0xFFFFFFF5
        public_65db31f : nop
        push eax
        call dword ptr ds : [public_65e109c]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_65db344
        push edi
        call dword ptr ds : [public_65e10a0]
        test eax, eax
        je public_65db344
        and eax, 0xFF
        mov dword ptr ds : [esi], edi
        cmp eax, 2
        jne public_65db34a
        public_65db344 : nop
        or byte ptr ds : [esi+4], 0x40
        jmp public_65db359
        public_65db34a : nop
        cmp eax, 3
        jne public_65db359
        or byte ptr ds : [esi+4], 8
        jmp public_65db359
        public_65db355 : nop
        or byte ptr ds : [esi+4], 0x80
        public_65db359 : nop
        inc ebx
        cmp ebx, 3
        jl public_65db2f6
        push dword ptr ds : [public_65e7a40]
        call dword ptr ds : [public_65e1098]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65db1b4)
    }
}

#undef public_65db1d6
#undef public_65db1ec
#undef public_65db20e
#undef public_65db244
#undef public_65db251
#undef public_65db26f
#undef public_65db28f
#undef public_65db29c
#undef public_65db2a2
#undef public_65db2a8
#undef public_65db2c7
#undef public_65db2ea
#undef public_65db2f4
#undef public_65db2f6
#undef public_65db315
#undef public_65db31f
#undef public_65db344
#undef public_65db34a
#undef public_65db355
#undef public_65db359
