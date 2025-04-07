#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6386080);
CLANG_FORWARD_PROC_SYMBOL(public_638ba00);

#define public_638ba18 _public_638ba18
#define public_638ba26 _public_638ba26
#define public_638ba4e _public_638ba4e
#define public_638ba73 _public_638ba73
#define public_638ba8e _public_638ba8e

PROC_DECLARE(0x638ba00, internal_638ba00, public_638ba00);
extern "C" NAKED register_t __cdecl internal_638ba00()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b838]
        push ebx
        xor ebx, ebx
        test eax, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0xC], ebx
        je public_638ba26
        mov ecx, 0xFEFFFFFF
        public_638ba18 : nop
        cmp dword ptr ds : [eax], 0
        je public_638ba26
        and dword ptr ds : [eax+0x14], ecx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_638ba18
        public_638ba26 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_638ba8e
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push eax
        call public_636ec10
        add esp, 4
        test eax, eax
        jle public_638ba8e
        mov ebx, dword ptr ss : [esp+0x24]
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x20], eax
        public_638ba4e : nop
        test esi, esi
        je public_638ba73
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push 0
        push esi
        push eax
        push ecx
        call public_6386080
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0x18
        add ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        public_638ba73 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [edi+4]
        add edi, 4
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        jne public_638ba4e
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        public_638ba8e : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x638ba00)
    }
}

#undef public_638ba18
#undef public_638ba26
#undef public_638ba4e
#undef public_638ba73
#undef public_638ba8e
