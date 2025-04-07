#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3360);
CLANG_FORWARD_PROC_SYMBOL(public_6ce34d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);

#define public_6ce34e7 _public_6ce34e7
#define public_6ce34f3 _public_6ce34f3
#define public_6ce34f5 _public_6ce34f5
#define public_6ce3519 _public_6ce3519
#define public_6ce351b _public_6ce351b
#define public_6ce3523 _public_6ce3523
#define public_6ce3550 _public_6ce3550
#define public_6ce36d6 _public_6ce36d6
#define public_6ce36e5 _public_6ce36e5

PROC_DECLARE(0x6ce34d0, internal_6ce34d0, public_6ce34d0);
extern "C" NAKED register_t __cdecl internal_6ce34d0()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        mov ebx, dword ptr ds : [public_6d64034]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x2C], edi
        xor esi, esi
        public_6ce34e7 : nop
        test esi, esi
        jne public_6ce34f3
        mov esi, dword ptr ds : [edi+0x88]
        jmp public_6ce34f5
        public_6ce34f3 : nop
        mov esi, dword ptr ds : [esi]
        public_6ce34f5 : nop
        test esi, esi
        je public_6ce3523
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6ce3519
        add eax, 0xC
        test eax, eax
        je public_6ce3519
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6ce3519
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x67
        cmp cl, 0x67
        je public_6ce351b
        public_6ce3519 : nop
        xor eax, eax
        public_6ce351b : nop
        push eax
        call ebx
        add esp, 4
        jmp public_6ce34e7
        public_6ce3523 : nop
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6d06cd0
        push eax
        call dword ptr ds : [public_6d64030]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        cmp eax, ecx
        je public_6ce36e5
        push ebp
        nop 
        public_6ce3550 : nop
        mov esi, eax
        add eax, 0x34
        lea ecx, ss:[esp+0x12]
        push ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        push ecx
        mov ecx, edi
        call public_6ce3360
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6ce36d6
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        push edx
        mov ecx, edi
        call public_6ce3360
        mov ebp, dword ptr ss : [esp+0x20]
        test ebp, ebp
        je public_6ce36d6
        mov ax, word ptr ss : [esp+0x12]
        mov cx, word ptr ss : [esp+0x10]
        mov word ptr ss : [esp+0x40], ax
        mov word ptr ss : [esp+0x48], cx
        lea edi, ds:[esi+0x10]
        mov edx, edi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], ecx
        lea ebx, ds:[esi+0x1C]
        mov dword ptr ss : [esp+0x54], edx
        mov eax, ebx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x58], ecx
        add esi, 0x28
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x60], eax
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x68], eax
        mov dword ptr ss : [esp+0x6C], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x1A4]
        fld dword ptr ds : [ebx]
        fchs 
        mov cx, word ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov ax, word ptr ss : [esp+0x12]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [ebx+4]
        mov word ptr ss : [esp+0x70], cx
        fchs 
        mov ecx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x74], edx
        mov edx, dword ptr ds : [edi+4]
        fchs 
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi]
        mov word ptr ss : [esp+0x78], ax
        mov eax, dword ptr ds : [edi+8]
        fchs 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x7C], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x80], edx
        mov edx, dword ptr ss : [esp+0x38]
        fchs 
        mov dword ptr ss : [esp+0x84], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x88], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x8C], edx
        mov edx, dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x90], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x98], edx
        mov dword ptr ss : [esp+0x9C], eax
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x70]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x1A4]
        mov edi, dword ptr ss : [esp+0x30]
        public_6ce36d6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ss : [esp+0x1C]
        jne public_6ce3550
        pop ebp
        public_6ce36e5 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x6ce34d0)
    }
}

#undef public_6ce34e7
#undef public_6ce34f3
#undef public_6ce34f5
#undef public_6ce3519
#undef public_6ce351b
#undef public_6ce3523
#undef public_6ce3550
#undef public_6ce36d6
#undef public_6ce36e5
