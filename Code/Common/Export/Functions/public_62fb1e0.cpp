#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272b50);
CLANG_FORWARD_PROC_SYMBOL(public_62fb1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62fb20e _public_62fb20e
#define public_62fb214 _public_62fb214
#define public_62fb232 _public_62fb232
#define public_62fb246 _public_62fb246

PROC_DECLARE(0x62fb1e0, internal_62fb1e0, public_62fb1e0);
extern "C" NAKED register_t __cdecl internal_62fb1e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi]
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_62fb20e
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_62fb20e : nop
        test eax, eax
        jge public_62fb214
        xor eax, eax
        public_62fb214 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6391d9c
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_62fb246
        public_62fb232 : nop
        push esi
        push edi
        call public_6272b50
        add esi, 0x14
        add esp, 8
        add edi, 0x14
        cmp esi, ebx
        jne public_62fb232
        public_62fb246 : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62fb1e0)
    }
}

#undef public_62fb20e
#undef public_62fb214
#undef public_62fb232
#undef public_62fb246
