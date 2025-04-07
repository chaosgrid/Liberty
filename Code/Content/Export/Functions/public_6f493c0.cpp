#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f493c0);

#define public_6f493e0 _public_6f493e0
#define public_6f49403 _public_6f49403
#define public_6f49410 _public_6f49410
#define public_6f49418 _public_6f49418
#define public_6f49422 _public_6f49422
#define public_6f49429 _public_6f49429
#define public_6f49433 _public_6f49433

PROC_DECLARE(0x6f493c0, internal_6f493c0, public_6f493c0);
extern "C" NAKED register_t __cdecl internal_6f493c0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x58]
        test edx, edx
        push edi
        je public_6f49433
        mov eax, dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [eax]
        xor edi, edi
        test edx, edx
        jbe public_6f49433
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6f493e0 : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x15]
        add esi, 8
        test bl, bl
        jne public_6f49410
        mov eax, edx
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6f49429
        public_6f49403 : nop
        mov eax, edx
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        je public_6f49403
        jmp public_6f49429
        public_6f49410 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f49422
        public_6f49418 : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx+4]
        cmp eax, dword ptr ds : [edx+8]
        je public_6f49418
        public_6f49422 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6f49429
        mov eax, edx
        public_6f49429 : nop
        mov edx, dword ptr ds : [ecx+0x58]
        inc edi
        cmp edi, edx
        jb public_6f493e0
        pop esi
        pop ebx
        public_6f49433 : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6f493c0)
    }
}

#undef public_6f493e0
#undef public_6f49403
#undef public_6f49410
#undef public_6f49418
#undef public_6f49422
#undef public_6f49429
#undef public_6f49433
