#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403200);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_403204 _public_403204
#define public_403219 _public_403219
#define public_40321d _public_40321d
#define public_40322b _public_40322b
#define public_403231 _public_403231
#define public_403242 _public_403242
#define public_403244 _public_403244
#define public_403252 _public_403252
#define public_403265 _public_403265
#define public_403269 _public_403269
#define public_403277 _public_403277
#define public_40327d _public_40327d
#define public_40329d _public_40329d

PROC_DECLARE(0x403200, internal_403200, public_403200);
extern "C" NAKED register_t __cdecl internal_403200()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        public_403204 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_403252
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_403219
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0xC], ecx
        jmp public_40321d
        public_403219 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_40321d : nop
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        jne public_40322b
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_403231
        public_40322b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        public_403231 : nop
        dec dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ds : [esi+4], eax
        jne public_403242
        mov dword ptr ds : [esi], eax
        jmp public_403244
        public_403242 : nop
        mov dword ptr ds : [ecx], eax
        public_403244 : nop
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], ecx
        inc dword ptr ds : [esi+8]
        jmp public_403204
        public_403252 : nop
        mov edi, dword ptr ds : [esi]
        test edi, edi
        je public_40329d
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_403265
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        jmp public_403269
        public_403265 : nop
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        public_403269 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        jne public_403277
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], edx
        jmp public_40327d
        public_403277 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], ecx
        public_40327d : nop
        dec dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+0x14]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_5b7e1d
        push edi
        call public_5b7e1d
        add esp, 0xC
        jmp public_403252
        public_40329d : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x403200)
    }
}

#undef public_403204
#undef public_403219
#undef public_40321d
#undef public_40322b
#undef public_403231
#undef public_403242
#undef public_403244
#undef public_403252
#undef public_403265
#undef public_403269
#undef public_403277
#undef public_40327d
#undef public_40329d
