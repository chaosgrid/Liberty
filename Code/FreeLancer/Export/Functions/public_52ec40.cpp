#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_52ec40);
CLANG_FORWARD_PROC_SYMBOL(public_531a30);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0569);

#define public_52ed60 _public_52ed60
#define public_52ed81 _public_52ed81

PROC_DECLARE(0x52ec40, internal_52ec40, public_52ec40);
extern "C" NAKED register_t __cdecl internal_52ec40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0569 @0x52ec42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0569
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x88
        mov eax, dword ptr ss : [esp+0x9C]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xA4]
        push eax
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        call public_531a30
        xor ecx, ecx
        lea ebp, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x9C], ecx
        mov dword ptr ss : [ebp], ecx
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx], offset public_5ddbd8
        mov edx, dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+0x58]
        cmp byte ptr ds : [eax], cl
        mov byte ptr ss : [esp+0x9C], 1
        je public_52ed81
        lea ecx, ds:[esi+0x54]
        mov dword ptr ss : [esp+0x10], ecx
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52ed81
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [esi+0x58]
        lea edx, ss:[esp+0x4C]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        push eax
        call dword ptr ds : [public_5c65e8]
        add esp, 0x10
        test al, al
        je public_52ed60
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x58]
        push edi
        mov ecx, 9
        lea esi, ss:[esp+0x60]
        lea edi, ss:[esp+0x20]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x58]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6040]
        test al, al
        pop edi
        jne public_52ed81
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        lea ecx, ss:[esp+0x20]
        push ecx
        push esi
        push edx
        push eax
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        jmp public_52ed81
        mov edi, edi
        public_52ed60 : nop
        mov ecx, dword ptr ds : [esi+0x58]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x2C
/*FIXUP push offset public_5ddba0 @0x52ed6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddba0
        mov eax, 0x100002
/*FIXUP push offset public_5ddb68 @0x52ed76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddb68
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_52ed81 : nop
        mov ecx, dword ptr ss : [esp+0x94]
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x94
        ret 8
        UNREACHABLE_TRAP(0x52ec40)
    }
}

#undef public_52ed60
#undef public_52ed81
