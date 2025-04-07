#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e670);
CLANG_FORWARD_PROC_SYMBOL(public_636f780);
CLANG_FORWARD_PROC_SYMBOL(public_638e480);

#define public_638e4cc _public_638e4cc
#define public_638e4dc _public_638e4dc
#define public_638e501 _public_638e501
#define public_638e50c _public_638e50c
#define public_638e518 _public_638e518
#define public_638e523 _public_638e523
#define public_638e52a _public_638e52a

PROC_DECLARE(0x638e480, internal_638e480, public_638e480);
extern "C" NAKED register_t __cdecl internal_638e480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ds : [public_658bc70]
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        push edi
        inc ecx
        mov dword ptr ds : [public_658bc70], ecx
        mov ecx, dword ptr ds : [public_658b24c]
        mov edx, dword ptr ds : [ebx]
        push ebp
        push 0
        dec ecx
        push ecx
        push edx
        push eax
        call public_636f780
        mov ecx, dword ptr ss : [esp+0x28]
        mov edi, eax
        mov esi, dword ptr ds : [ecx+edi*4+4]
        add esp, 0x14
        test esi, esi
        je public_638e518
        public_638e4cc : nop
        cmp esi, ebx
        jne public_638e4dc
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], 0xFFFFFFFF
        jmp public_638e501
        public_638e4dc : nop
        mov edx, dword ptr ds : [public_658bc78]
        mov eax, dword ptr ss : [esp+0x24]
        inc edx
        mov dword ptr ds : [public_658bc78], edx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        push ebp
        push edx
        call public_636e670
        add esp, 0x10
        test eax, eax
        jne public_638e52a
        public_638e501 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc edi
        cmp edi, eax
        jne public_638e50c
        xor edi, edi
        public_638e50c : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax+edi*4+4]
        test esi, esi
        jne public_638e4cc
        public_638e518 : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp dword ptr ds : [eax], 0
        jne public_638e523
        mov dword ptr ds : [eax], edi
        public_638e523 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_638e52a : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x638e480)
    }
}

#undef public_638e4cc
#undef public_638e4dc
#undef public_638e501
#undef public_638e50c
#undef public_638e518
#undef public_638e523
#undef public_638e52a
