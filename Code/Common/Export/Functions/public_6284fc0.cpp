#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284f70);
CLANG_FORWARD_PROC_SYMBOL(public_6284fc0);
CLANG_FORWARD_PROC_SYMBOL(public_62883c0);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_628b6e0);
CLANG_FORWARD_PROC_SYMBOL(public_628b740);
CLANG_FORWARD_PROC_SYMBOL(public_6345f90);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6284ff8 _public_6284ff8
#define public_6285097 _public_6285097
#define public_62850e1 _public_62850e1
#define public_6285121 _public_6285121
#define public_6285168 _public_6285168

PROC_DECLARE(0x6284fc0, internal_6284fc0, public_6284fc0);
extern "C" NAKED register_t __cdecl internal_6284fc0()
{
    __asm
    {
        sub esp, 0x90
        mov eax, dword ptr ds : [public_63fc084]
        test eax, eax
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xA0]
        fld dword ptr ds : [esi+0x24]
        push edi
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ds : [esi+0x28]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ds : [esi+0x2C]
        fstp dword ptr ss : [esp+0x70]
        jne public_6284ff8
        call public_6391cf0
        mov dword ptr ds : [public_63fc084], eax
        public_6284ff8 : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0xA0]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x5C], ecx
        mov dword ptr ss : [esp+0x64], eax
        mov al, byte ptr ss : [esp+0xA8]
        xor ecx, ecx
        test al, al
        setne cl
        mov dword ptr ss : [esp+0x60], edx
        lea edx, ss:[esp+0x68]
        lea eax, ss:[esp+0x58]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x54]
        push edx
        push eax
        call public_6345f90
        mov eax, dword ptr ds : [ebx+0x80]
        test eax, eax
        je public_6285168
        mov ecx, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [ebx+0x10]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x24]
        push edx
        mov edx, dword ptr ds : [ebx+0x18]
        push eax
        mov eax, dword ptr ds : [ebx+0xC]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x20]
        push edx
        mov edx, dword ptr ds : [ebx+0x14]
        push eax
        mov eax, dword ptr ds : [ebx+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x9C]
        call public_6284f70
        mov eax, dword ptr ds : [ebx+0x7C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6285168
        public_6285097 : nop
        mov edx, dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x40]
        push ecx
        push edx
        call public_628b740
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ds : [ebx+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ds : [ebx+0x30]
        fstp dword ptr ss : [esp]
        push ecx
        fld dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x18]
        fsub dword ptr ds : [ebx+0x2C]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ds : [public_63fc084]
        test eax, eax
        jne public_62850e1
        call public_6391cf0
        mov dword ptr ds : [public_63fc084], eax
        public_62850e1 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0x7C]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [public_63fc084]
        test eax, eax
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], edx
        jne public_6285121
        call public_6391cf0
        mov dword ptr ds : [public_63fc084], eax
        public_6285121 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        push esi
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [edi+8]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x2C], edx
        call public_628b6e0
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ebx+0x7C]
        add esp, 8
        cmp edi, eax
        jne public_6285097
        public_6285168 : nop
        mov edx, dword ptr ds : [ebx+4]
        push ebx
        lea edi, ds:[ebx+8]
        mov ecx, 0xC
        push edx
        rep movsd
        call public_62883c0
        add esp, 8
        pop edi
        pop esi
        pop ebx
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x6284fc0)
    }
}

#undef public_6284ff8
#undef public_6285097
#undef public_62850e1
#undef public_6285121
#undef public_6285168
