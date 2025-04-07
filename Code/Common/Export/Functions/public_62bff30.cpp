#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);

#define public_62bff86 _public_62bff86
#define public_62bff98 _public_62bff98
#define public_62bffa8 _public_62bffa8
#define public_62bffc3 _public_62bffc3
#define public_62bffc7 _public_62bffc7

PROC_DECLARE(0x62bff30, internal_62bff30, public_62bff30);
extern "C" NAKED register_t __cdecl internal_62bff30()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x10]
        test edi, edi
        mov eax, 0xFFFFFFFD
        je public_62bffc7
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62bffc7
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x14]
        xor esi, esi
        call public_629b990
        lea eax, ss:[esp+0x10]
        add edi, 0xE4
        push eax
        mov ecx, edi
        call public_629b430
        test eax, eax
        mov ebx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        je public_62bffa8
        public_62bff86 : nop
        cmp esi, ebx
        jae public_62bff98
        mov cx, word ptr ds : [eax+8]
        mov word ptr ss : [ebp+esi*2], cx
        inc esi
        cmp ebx, esi
        je public_62bffc3
        public_62bff98 : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        call public_629b430
        test eax, eax
        jne public_62bff86
        public_62bffa8 : nop
        cmp ebx, esi
        jbe public_62bffc3
        mov ax, word ptr ds : [public_63a4aa4]
        pop edi
        mov word ptr ss : [ebp+esi*2], ax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 0xC
        public_62bffc3 : nop
        sbb eax, eax
        and eax, esi
        public_62bffc7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x62bff30)
    }
}

#undef public_62bff86
#undef public_62bff98
#undef public_62bffa8
#undef public_62bffc3
#undef public_62bffc7
