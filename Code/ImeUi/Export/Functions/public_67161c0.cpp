#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67161c0);

#define public_67161d3 _public_67161d3
#define public_67161e7 _public_67161e7
#define public_6716205 _public_6716205
#define public_6716209 _public_6716209
#define public_671620e _public_671620e
#define public_6716217 _public_6716217
#define public_671621f _public_671621f
#define public_6716224 _public_6716224
#define public_671622b _public_671622b
#define public_6716231 _public_6716231
#define public_6716238 _public_6716238

PROC_DECLARE(0x67161c0, internal_67161c0, public_67161c0);
extern "C" NAKED register_t __cdecl internal_67161c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        and dword ptr ss : [ebp-4], 0
        mov ecx, dword ptr ss : [ebp+0xC]
        dec ecx
        test ecx, ecx
        push esi
        jl public_671622b
        push ebx
        push edi
        public_67161d3 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov edi, dword ptr ss : [ebp+8]
        lea esi, ds:[ecx+eax]
        mov eax, dword ptr ss : [ebp+0x14]
        sar esi, 1
        mov eax, dword ptr ds : [eax+esi*4]
        add eax, dword ptr ss : [ebp+0x10]
        public_67161e7 : nop
        mov bl, byte ptr ds : [edi]
        mov dl, bl
        cmp bl, byte ptr ds : [eax]
        jne public_6716209
        test dl, dl
        je public_6716205
        mov bl, byte ptr ds : [edi+1]
        mov dl, bl
        cmp bl, byte ptr ds : [eax+1]
        jne public_6716209
        inc edi
        inc edi
        inc eax
        inc eax
        test dl, dl
        jne public_67161e7
        public_6716205 : nop
        xor eax, eax
        jmp public_671620e
        public_6716209 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_671620e : nop
        test eax, eax
        jge public_6716217
        lea ecx, ds:[esi-1]
        jmp public_671621f
        public_6716217 : nop
        jle public_6716224
        lea eax, ds:[esi+1]
        mov dword ptr ss : [ebp-4], eax
        public_671621f : nop
        cmp ecx, dword ptr ss : [ebp-4]
        jge public_67161d3
        public_6716224 : nop
        cmp ecx, dword ptr ss : [ebp-4]
        pop edi
        pop ebx
        jge public_6716231
        public_671622b : nop
        or ax, 0xFFFF
        jmp public_6716238
        public_6716231 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ax, word ptr ds : [eax+esi*2]
        public_6716238 : nop
        pop esi
        leave 
        ret 0x14
        UNREACHABLE_TRAP(0x67161c0)
    }
}

#undef public_67161d3
#undef public_67161e7
#undef public_6716205
#undef public_6716209
#undef public_671620e
#undef public_6716217
#undef public_671621f
#undef public_6716224
#undef public_671622b
#undef public_6716231
#undef public_6716238
