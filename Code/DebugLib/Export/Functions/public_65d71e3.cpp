#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d71e3);
CLANG_FORWARD_PROC_SYMBOL(public_65d90c9);

#define public_65d7201 _public_65d7201
#define public_65d720b _public_65d720b
#define public_65d7220 _public_65d7220
#define public_65d7225 _public_65d7225
#define public_65d7231 _public_65d7231
#define public_65d723a _public_65d723a
#define public_65d724e _public_65d724e
#define public_65d7253 _public_65d7253

PROC_DECLARE(0x65d71e3, internal_65d71e3, public_65d71e3);
extern "C" NAKED register_t __cdecl internal_65d71e3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        cmp dword ptr ss : [ebp+0xC], 0
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ds : [edi+0x10]
        mov eax, esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp-4], eax
        jl public_65d723a
        public_65d7201 : nop
        cmp esi, 0xFFFFFFFF
        jne public_65d720b
        call public_65d90c9
        public_65d720b : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        dec esi
        lea eax, ds:[esi+esi*4]
        cmp dword ptr ds : [ebx+eax*4+4], ecx
        lea eax, ds:[ebx+eax*4]
        jge public_65d7220
        cmp ecx, dword ptr ds : [eax+8]
        jle public_65d7225
        public_65d7220 : nop
        cmp esi, 0xFFFFFFFF
        jne public_65d7231
        public_65d7225 : nop
        mov eax, dword ptr ss : [ebp+8]
        dec dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp+8], esi
        public_65d7231 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        jge public_65d7201
        mov eax, dword ptr ss : [ebp-4]
        public_65d723a : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        inc esi
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ecx], eax
        cmp eax, dword ptr ds : [edi+0xC]
        ja public_65d724e
        cmp esi, eax
        jbe public_65d7253
        public_65d724e : nop
        call public_65d90c9
        public_65d7253 : nop
        lea eax, ds:[esi+esi*4]
        pop edi
        pop esi
        lea eax, ds:[ebx+eax*4]
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d71e3)
    }
}

#undef public_65d7201
#undef public_65d720b
#undef public_65d7220
#undef public_65d7225
#undef public_65d7231
#undef public_65d723a
#undef public_65d724e
#undef public_65d7253
