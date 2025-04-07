#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ab90);

#define public_6285f40 _public_6285f40
#define public_6285f58 _public_6285f58
#define public_6285f62 _public_6285f62
#define public_6285f6f _public_6285f6f
#define public_6285f72 _public_6285f72
#define public_6285f77 _public_6285f77
#define public_6285f81 _public_6285f81
#define public_6285f94 _public_6285f94
#define public_6285f97 _public_6285f97
#define public_6285f9a _public_6285f9a

PROC_DECLARE(0x6285f10, internal_6285f10, public_6285f10);
extern "C" NAKED register_t __cdecl internal_6285f10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push ecx
        mov ecx, ebx
        call public_634ab90
        mov edi, dword ptr ds : [esi+4]
        dec edi
        js public_6285f9a
        public_6285f40 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+edi*4]
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx+0x5C]
        test eax, eax
        jne public_6285f58
        mov eax, dword ptr ds : [ecx+4]
        jmp public_6285f72
        public_6285f58 : nop
        mov eax, dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ds : [ecx+0x6C]
        cmp eax, ecx
        je public_6285f77
        public_6285f62 : nop
        cmp dword ptr ds : [eax], edx
        je public_6285f6f
        add eax, 0xC
        cmp eax, ecx
        jne public_6285f62
        jmp public_6285f77
        public_6285f6f : nop
        mov eax, dword ptr ds : [eax+4]
        public_6285f72 : nop
        cmp eax, 0xFFFFFFFF
        jne public_6285f97
        public_6285f77 : nop
        mov ecx, dword ptr ds : [esi+4]
        dec ecx
        cmp edi, ecx
        mov eax, edi
        jge public_6285f94
        public_6285f81 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        dec ecx
        cmp eax, ecx
        jl public_6285f81
        public_6285f94 : nop
        dec dword ptr ds : [esi+4]
        public_6285f97 : nop
        dec edi
        jns public_6285f40
        public_6285f9a : nop
        pop edi
        pop esi
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x6285f10)
    }
}

#undef public_6285f40
#undef public_6285f58
#undef public_6285f62
#undef public_6285f6f
#undef public_6285f72
#undef public_6285f77
#undef public_6285f81
#undef public_6285f94
#undef public_6285f97
#undef public_6285f9a
