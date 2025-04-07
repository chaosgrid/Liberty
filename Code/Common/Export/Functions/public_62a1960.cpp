#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a02d0);
CLANG_FORWARD_PROC_SYMBOL(public_62a0450);
CLANG_FORWARD_PROC_SYMBOL(public_62a1960);
CLANG_FORWARD_PROC_SYMBOL(public_62a1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1d40);
CLANG_FORWARD_PROC_SYMBOL(public_63344f0);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_62a1973 _public_62a1973
#define public_62a19d9 _public_62a19d9
#define public_62a19da _public_62a19da
#define public_62a19df _public_62a19df
#define public_62a19e5 _public_62a19e5
#define public_62a19f2 _public_62a19f2
#define public_62a1a09 _public_62a1a09
#define public_62a1a2a _public_62a1a2a
#define public_62a1a3b _public_62a1a3b

PROC_DECLARE(0x62a1960, internal_62a1960, public_62a1960);
extern "C" NAKED register_t __cdecl internal_62a1960()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov ebp, ecx
        je public_62a19e5
        public_62a1973 : nop
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        push ecx
        call public_63344f0
        add esp, 4
        test al, al
        je public_62a19df
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_62a19df
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[ebp+4]
        mov dword ptr ss : [esp+0x1C], edx
        call public_62a1d40
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ss : [ebp+8]
        je public_62a19df
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_62a19df
        mov eax, dword ptr ds : [ecx+0x14]
        cmp eax, 2
        je public_62a19df
        cmp eax, 3
        je public_62a19df
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, 2
        jne public_62a19d9
        mov dl, byte ptr ss : [esp+0x18]
        test dl, dl
        je public_62a19d9
        push eax
        jmp public_62a19da
        public_62a19d9 : nop
        push eax
        public_62a19da : nop
        call public_62a02d0
        public_62a19df : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_62a1973
        public_62a19e5 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], eax
        je public_62a1a3b
        public_62a19f2 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax+0x14]
        cmp ecx, 3
        je public_62a1a2a
        mov eax, ecx
        cmp eax, 2
        je public_62a1a09
        cmp eax, 3
        jne public_62a1a2a
        public_62a1a09 : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xCC]
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax+0x10]
        push esi
        mov ecx, ebp
        call public_62a1ac0
        mov ecx, esi
        call public_62a0450
        public_62a1a2a : nop
        lea ecx, ss:[esp+0x18]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        jne public_62a19f2
        public_62a1a3b : nop
        pop edi
        pop esi
        mov al, 1
        pop ebp
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62a1960)
    }
}

#undef public_62a1973
#undef public_62a19d9
#undef public_62a19da
#undef public_62a19df
#undef public_62a19e5
#undef public_62a19f2
#undef public_62a1a09
#undef public_62a1a2a
#undef public_62a1a3b
