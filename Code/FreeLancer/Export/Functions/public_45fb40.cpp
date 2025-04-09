#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45fb40);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_46cef0);
CLANG_FORWARD_PROC_SYMBOL(public_46d920);
CLANG_FORWARD_PROC_SYMBOL(public_46e640);
CLANG_FORWARD_PROC_SYMBOL(public_46ec70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_45fb58 _public_45fb58
#define public_45fbd6 _public_45fbd6
#define public_45fbef _public_45fbef
#define public_45fc04 _public_45fc04
#define public_45fc11 _public_45fc11
#define public_45fc20 _public_45fc20
#define public_45fc2a _public_45fc2a
#define public_45fc31 _public_45fc31
#define public_45fc3d _public_45fc3d

PROC_DECLARE(0x45fb40, internal_45fb40, public_45fb40);
extern "C" NAKED register_t __cdecl internal_45fb40()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ds : [ecx+4]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_45fc3d
        push ebx
        push ebp
        push esi
        public_45fb58 : nop
        mov al, byte ptr ds : [edi+0xE]
        test al, al
        lea ebp, ds:[edi+0xC]
        jne public_45fbef
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [public_66da48]
        je public_45fbef
        lea esi, ds:[ecx+0x18]
        push ebp
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_46e640
        push ebp
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, esi
        mov ebx, eax
        call public_46d920
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [ebx]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x24], 0
        call public_46ec70
        add esp, 0x10
        push ebx
        push ebp
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, esi
        call public_46cef0
        mov esi, dword ptr ds : [edi+0x10]
        test esi, esi
        je public_45fbd6
        mov ecx, esi
        call dword ptr ds : [public_5c62c4]
        push esi
        call public_5b7e1d
        add esp, 4
        public_45fbd6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        call public_46c8c0
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_45fc31
        public_45fbef : nop
        mov eax, dword ptr ds : [edi+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_45fc11
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_45fc31
        public_45fc04 : nop
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_45fc04
        jmp public_45fc31
        public_45fc11 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_45fc2a
        lea esp, ss:[esp]
        public_45fc20 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_45fc20
        public_45fc2a : nop
        cmp dword ptr ds : [edi+8], eax
        je public_45fc31
        mov edi, eax
        public_45fc31 : nop
        cmp edi, dword ptr ds : [ecx+4]
        jne public_45fb58
        pop esi
        pop ebp
        pop ebx
        public_45fc3d : nop
        inc dword ptr ds : [ecx+0x14]
        pop edi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x45fb40)
    }
}

#undef public_45fb58
#undef public_45fbd6
#undef public_45fbef
#undef public_45fc04
#undef public_45fc11
#undef public_45fc20
#undef public_45fc2a
#undef public_45fc31
#undef public_45fc3d
