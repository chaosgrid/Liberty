#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b96c0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9d50);
CLANG_FORWARD_PROC_SYMBOL(public_62b9dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b96dd _public_62b96dd
#define public_62b96e1 _public_62b96e1
#define public_62b9703 _public_62b9703
#define public_62b9727 _public_62b9727
#define public_62b976a _public_62b976a

PROC_DECLARE(0x62b96c0, internal_62b96c0, public_62b96c0);
extern "C" NAKED register_t __cdecl internal_62b96c0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        cmp ebx, eax
        mov dword ptr ss : [esp+8], ecx
        je public_62b976a
        push ebp
        push esi
        push edi
        jmp public_62b96e1
        public_62b96dd : nop
        mov ebx, dword ptr ss : [esp+0x24]
        public_62b96e1 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+4], ecx
        mov ebp, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+8]
        je public_62b9727
        public_62b9703 : nop
        push esi
        mov dword ptr ss : [esp+0x14], esi
        call public_62b9dc0
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_62b9d50
        cmp esi, ebp
        jne public_62b9703
        public_62b9727 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6391d5a
        xor eax, eax
        push ebx
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 8
        dec ecx
        mov dword ptr ds : [eax+8], ecx
        cmp dword ptr ss : [esp+0x24], edx
        jne public_62b96dd
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_62b976a : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ebx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62b96c0)
    }
}

#undef public_62b96dd
#undef public_62b96e1
#undef public_62b9703
#undef public_62b9727
#undef public_62b976a
