#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_63862c0);
CLANG_FORWARD_PROC_SYMBOL(public_63864e0);
CLANG_FORWARD_PROC_SYMBOL(public_6388ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6388c00);

#define public_6388b38 _public_6388b38
#define public_6388b57 _public_6388b57
#define public_6388b8f _public_6388b8f
#define public_6388b97 _public_6388b97
#define public_6388bc9 _public_6388bc9

PROC_DECLARE(0x6388ae0, internal_6388ae0, public_6388ae0);
extern "C" NAKED register_t __cdecl internal_6388ae0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        push esi
        call public_63862c0
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        push esi
        call public_63864e0
        mov eax, dword ptr ds : [public_658b110]
        mov edi, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0x1C
        test eax, eax
        jne public_6388b38
        mov eax, dword ptr ds : [public_658b108]
        test eax, eax
        jne public_6388b57
        mov eax, dword ptr ds : [public_658b100]
        test eax, eax
        jne public_6388b8f
        public_6388b38 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        push ecx
        push edx
        push ebx
        call public_6388c00
        add esp, 0x1C
        public_6388b57 : nop
        mov eax, dword ptr ds : [public_658b100]
        test eax, eax
        jne public_6388b8f
        mov eax, dword ptr ds : [public_658b108]
        test eax, eax
        jne public_6388bc9
        mov eax, dword ptr ds : [public_658b110]
        test eax, eax
        jne public_6388bc9
        fld qword ptr ss : [esp+0x18]
        fsub qword ptr ss : [esp+0x20]
        fld qword ptr ds : [public_658b6a8]
        fmul qword ptr ds : [public_63a5a60]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6388bc9
        public_6388b8f : nop
        lea eax, ds:[edi+0x10]
        mov ecx, 3
        public_6388b97 : nop
        fld qword ptr ds : [public_63a5940]
        dec ecx
        fsub qword ptr ds : [eax]
        sub eax, 8
        test ecx, ecx
        fstp qword ptr ds : [eax+8]
        ja public_6388b97
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edx
        push eax
        push ebx
        call public_6388c00
        add esp, 0x1C
        public_6388bc9 : nop
        mov ecx, dword ptr ds : [public_658b804]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        call public_6377fe0
        mov eax, dword ptr ds : [public_658b804]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        call public_6377fe0
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6388ae0)
    }
}

#undef public_6388b38
#undef public_6388b57
#undef public_6388b8f
#undef public_6388b97
#undef public_6388bc9
