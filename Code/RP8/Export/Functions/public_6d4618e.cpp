#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45ef5);
CLANG_FORWARD_PROC_SYMBOL(public_6d4618e);

#define public_6d461dc _public_6d461dc
#define public_6d461f1 _public_6d461f1
#define public_6d461fe _public_6d461fe
#define public_6d4621d _public_6d4621d
#define public_6d4626e _public_6d4626e
#define public_6d4629b _public_6d4629b
#define public_6d462ae _public_6d462ae
#define public_6d462cd _public_6d462cd
#define public_6d462d1 _public_6d462d1
#define public_6d462ea _public_6d462ea
#define public_6d46300 _public_6d46300

PROC_DECLARE(0x6d4618e, internal_6d4618e, public_6d4618e);
extern "C" NAKED register_t __cdecl internal_6d4618e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr ds : [esi+0x120]
        push ebx
        push edi
        xor edi, edi
        inc edi
        cmp eax, edi
        jne public_6d461f1
        mov ecx, dword ptr ds : [esi+0x124]
        mov eax, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [esi+0x134], eax
        mov eax, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [esi+0x138], eax
        mov eax, dword ptr ds : [ecx+0x24]
        mov ebx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [ecx+0x40], eax
        mov eax, dword ptr ds : [ecx+0x20]
        xor edx, edx
        div ebx
        mov dword ptr ds : [ecx+0x34], edi
        mov dword ptr ds : [ecx+0x38], edi
        mov dword ptr ds : [ecx+0x3C], edi
        mov dword ptr ds : [ecx+0x44], edi
        test edx, edx
        jne public_6d461dc
        mov edx, ebx
        public_6d461dc : nop
        mov dword ptr ds : [ecx+0x48], edx
        and dword ptr ds : [esi+0x140], 0
        mov dword ptr ds : [esi+0x13C], edi
        jmp public_6d46300
        public_6d461f1 : nop
        xor edi, edi
        cmp eax, edi
        push 4
        pop ecx
        jle public_6d461fe
        cmp eax, ecx
        jle public_6d4621d
        public_6d461fe : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x18
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+0x120]
        mov dword ptr ds : [eax+0x18], edx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x1C], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4621d : nop
        mov eax, dword ptr ds : [esi+0x10C]
        shl eax, 3
        push eax
        push dword ptr ds : [esi+0x18]
        call public_6d45ef5
        mov dword ptr ds : [esi+0x134], eax
        mov eax, dword ptr ds : [esi+0x110]
        shl eax, 3
        push eax
        push dword ptr ds : [esi+0x1C]
        call public_6d45ef5
        add esp, 0x10
        cmp dword ptr ds : [esi+0x120], edi
        mov dword ptr ds : [esi+0x138], eax
        mov dword ptr ds : [esi+0x13C], edi
        mov dword ptr ss : [ebp-4], edi
        jle public_6d46300
        lea eax, ds:[esi+0x124]
        mov dword ptr ss : [ebp-8], eax
        public_6d4626e : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0x24]
        imul eax, ebx
        mov edi, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [ecx+0x40], eax
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div ebx
        mov dword ptr ds : [ecx+0x38], edi
        imul edi, ebx
        mov dword ptr ds : [ecx+0x34], ebx
        mov dword ptr ds : [ecx+0x3C], edi
        test edx, edx
        jne public_6d4629b
        mov edx, ebx
        public_6d4629b : nop
        mov eax, dword ptr ds : [ecx+0x20]
        mov ebx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [ecx+0x44], edx
        xor edx, edx
        div ebx
        test edx, edx
        jne public_6d462ae
        mov edx, ebx
        public_6d462ae : nop
        mov dword ptr ds : [ecx+0x48], edx
        mov eax, dword ptr ds : [esi+0x13C]
        add eax, edi
        cmp eax, 0xA
        jle public_6d462cd
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0xB
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d462cd : nop
        test edi, edi
        jle public_6d462ea
        public_6d462d1 : nop
        mov eax, dword ptr ds : [esi+0x13C]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [esi+eax*4+0x140], ecx
        inc dword ptr ds : [esi+0x13C]
        dec edi
        jne public_6d462d1
        public_6d462ea : nop
        inc dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-8], 4
        cmp eax, dword ptr ds : [esi+0x120]
        jl public_6d4626e
        public_6d46300 : nop
        pop edi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4618e)
    }
}

#undef public_6d461dc
#undef public_6d461f1
#undef public_6d461fe
#undef public_6d4621d
#undef public_6d4626e
#undef public_6d4629b
#undef public_6d462ae
#undef public_6d462cd
#undef public_6d462d1
#undef public_6d462ea
#undef public_6d46300
