#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201810);

#define public_6201880 _public_6201880
#define public_62018af _public_62018af
#define public_62018c0 _public_62018c0
#define public_62018ea _public_62018ea
#define public_62018fc _public_62018fc
#define public_6201904 _public_6201904

PROC_DECLARE(0x6201870, internal_6201870, public_6201870);
extern "C" NAKED register_t __cdecl internal_6201870()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        jne public_6201880
        mov esi, dword ptr ds : [public_62578b0]
        public_6201880 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ebp
        push esi
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        call dword ptr ds : [ecx+0x20]
        push esi
        test byte ptr ss : [esp+0x18], 1
        je public_62018af
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x5C]
        pop esi
        xor eax, eax
        pop ebp
        ret 0xC
        public_62018af : nop
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x2C]
        mov esi, eax
        test esi, esi
        je public_6201904
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        public_62018c0 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ds : [esi]
        push ebp
        push esi
        mov edi, eax
        call dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        call dword ptr ds : [edx+0x20]
        push esi
        test byte ptr ss : [esp+0x18], 1
        je public_62018ea
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x5C]
        jmp public_62018fc
        public_62018ea : nop
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x2C]
        test eax, eax
        je public_62018fc
        push eax
        push ebp
        mov ecx, ebx
        call public_6201810
        public_62018fc : nop
        test edi, edi
        mov esi, edi
        jne public_62018c0
        pop edi
        pop ebx
        public_6201904 : nop
        pop esi
        xor eax, eax
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6201870)
    }
}

#undef public_6201880
#undef public_62018af
#undef public_62018c0
#undef public_62018ea
#undef public_62018fc
#undef public_6201904
