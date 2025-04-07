#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62becd0);
CLANG_FORWARD_PROC_SYMBOL(public_62bed30);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_62bde70 _public_62bde70
#define public_62bde8e _public_62bde8e
#define public_62bdeaf _public_62bdeaf
#define public_62bdeb8 _public_62bdeb8
#define public_62bded0 _public_62bded0
#define public_62bdef4 _public_62bdef4
#define public_62bdf1b _public_62bdf1b
#define public_62bdf34 _public_62bdf34
#define public_62bdf3c _public_62bdf3c

PROC_DECLARE(0x62bde40, internal_62bde40, public_62bde40);
extern "C" NAKED register_t __cdecl internal_62bde40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x30]
        sub esp, 8
        test eax, eax
        push ebp
        push esi
        je public_62bdf3c
        fld dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [ecx+0x2C]
        fdiv dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp]
        cmp edx, ebp
        mov dword ptr ss : [esp+0xC], ebp
        fstp dword ptr ss : [esp+0x14]
        je public_62bdeb8
        lea esp, ss:[esp]
        public_62bde70 : nop
        fld dword ptr ds : [edx+0x14]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_6399408]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_62bde8e
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_62bde8e : nop
        fstp dword ptr ds : [edx+0x14]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edx+0x18]
        fld dword ptr ds : [public_639a1d0]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_62bdeaf
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        public_62bdeaf : nop
        fstp dword ptr ds : [edx+0x18]
        mov edx, dword ptr ds : [edx]
        cmp edx, ebp
        jne public_62bde70
        public_62bdeb8 : nop
        mov eax, dword ptr ds : [ecx+0x2C]
        mov esi, dword ptr ds : [eax]
        cmp esi, ebp
        je public_62bdf3c
        push ebx
        push edi
        lea edi, ds:[ecx+0x10]
        mov dword ptr ss : [esp+0x10], edi
        lea ebx, ds:[ebx]
        public_62bded0 : nop
        lea ecx, ds:[esi+0x14]
        push ecx
        mov ecx, edi
        call public_62becd0
        lea edx, ds:[esi+0x18]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call public_62bed30
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        je public_62bdf34
        public_62bdef4 : nop
        mov edi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0xC]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x14]
        test al, al
        jne public_62bdf1b
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi]
        xor eax, eax
        mov ax, word ptr ds : [esi+0xC]
        push eax
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x1C]
        public_62bdf1b : nop
        lea ecx, ss:[esp+0x1C]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        jne public_62bdef4
        mov edi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x14]
        public_62bdf34 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_62bded0
        pop edi
        pop ebx
        public_62bdf3c : nop
        pop esi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62bde40)
    }
}

#undef public_62bde70
#undef public_62bde8e
#undef public_62bdeaf
#undef public_62bdeb8
#undef public_62bded0
#undef public_62bdef4
#undef public_62bdf1b
#undef public_62bdf34
#undef public_62bdf3c
