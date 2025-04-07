#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ac50);

#define public_6285fb5 _public_6285fb5
#define public_6285fcd _public_6285fcd
#define public_6285fd7 _public_6285fd7
#define public_6285fe4 _public_6285fe4
#define public_6285fe7 _public_6285fe7
#define public_6285fec _public_6285fec
#define public_6285ff6 _public_6285ff6
#define public_6286009 _public_6286009
#define public_628600c _public_628600c
#define public_628600f _public_628600f

PROC_DECLARE(0x6285fa0, internal_6285fa0, public_6285fa0);
extern "C" NAKED register_t __cdecl internal_6285fa0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov ebx, ecx
        call public_634ac50
        mov edi, dword ptr ds : [esi+4]
        dec edi
        js public_628600f
        public_6285fb5 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx+0x5C]
        test eax, eax
        jne public_6285fcd
        mov eax, dword ptr ds : [ecx+4]
        jmp public_6285fe7
        public_6285fcd : nop
        mov eax, dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ds : [ecx+0x6C]
        cmp eax, ecx
        je public_6285fec
        public_6285fd7 : nop
        cmp dword ptr ds : [eax], edx
        je public_6285fe4
        add eax, 0xC
        cmp eax, ecx
        jne public_6285fd7
        jmp public_6285fec
        public_6285fe4 : nop
        mov eax, dword ptr ds : [eax+4]
        public_6285fe7 : nop
        cmp eax, 0xFFFFFFFF
        jne public_628600c
        public_6285fec : nop
        mov edx, dword ptr ds : [esi+4]
        dec edx
        cmp edi, edx
        mov eax, edi
        jge public_6286009
        public_6285ff6 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        dec ecx
        cmp eax, ecx
        jl public_6285ff6
        public_6286009 : nop
        dec dword ptr ds : [esi+4]
        public_628600c : nop
        dec edi
        jns public_6285fb5
        public_628600f : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6285fa0)
    }
}

#undef public_6285fb5
#undef public_6285fcd
#undef public_6285fd7
#undef public_6285fe4
#undef public_6285fe7
#undef public_6285fec
#undef public_6285ff6
#undef public_6286009
#undef public_628600c
#undef public_628600f
