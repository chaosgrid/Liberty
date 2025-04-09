#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cc10);
CLANG_FORWARD_PROC_SYMBOL(public_42cc30);
CLANG_FORWARD_PROC_SYMBOL(public_48b2e0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc392);

#define public_48b455 _public_48b455
#define public_48b459 _public_48b459
#define public_48b469 _public_48b469
#define public_48b4ad _public_48b4ad

PROC_DECLARE(0x48b2e0, internal_48b2e0, public_48b2e0);
extern "C" NAKED register_t __cdecl internal_48b2e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc392 @0x48b2e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc392
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x20], ebp
        call public_59f860
        xor ebx, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [ebp+0x32C], offset public_5cbed8
        mov al, byte ptr ss : [esp+0x13]
        lea esi, ss:[ebp+0x34C]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        lea ecx, ss:[ebp+0x35C]
        mov byte ptr ss : [esp+0x2C], 2
        call public_42cc10
        lea edi, ss:[ebp+0x37C]
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        mov byte ptr ds : [edi+8], bl
        mov byte ptr ds : [edi+9], bl
        mov byte ptr ds : [edi+0xA], bl
        mov byte ptr ds : [edi+0xB], bl
        mov byte ptr ds : [edi+0xC], bl
        mov byte ptr ds : [edi+0xD], bl
        mov byte ptr ds : [edi+0xE], bl
        mov byte ptr ds : [edi+0xF], bl
        mov byte ptr ds : [edi+0x10], bl
        mov byte ptr ds : [edi+0x11], bl
        mov byte ptr ds : [edi+0x12], bl
        mov byte ptr ds : [edi+0x13], bl
        mov byte ptr ds : [edi+0x14], bl
        mov byte ptr ds : [edi+0x15], bl
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 4
        mov dword ptr ss : [ebp], offset public_5d26bc
        mov dword ptr ss : [ebp+0x7C], offset public_5d26ac
        mov dword ptr ss : [ebp+0x32C], offset public_5d26a4
        mov dword ptr ss : [ebp+0x33C], ebx
        mov dword ptr ss : [ebp+0x340], ebx
        mov byte ptr ss : [ebp+0x344], bl
        mov dword ptr ss : [ebp+0x370], ebx
        mov dword ptr ss : [ebp+0x374], ebx
        mov dword ptr ss : [ebp+0x378], ebx
        call dword ptr ds : [public_5c6288]
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov dword ptr ss : [ebp+0x394], ebx
        mov dword ptr ss : [ebp+0x398], ebx
        mov dword ptr ss : [ebp+0x39C], ebx
        mov dword ptr ss : [ebp+0x3A0], ebx
        mov ecx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], eax
        je public_48b459
        mov al, byte ptr ds : [eax-1]
        cmp al, bl
        je public_48b459
        cmp al, 0xFF
        je public_48b459
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c7084]
        mov edi, dword ptr ss : [esp+0x18]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_48b455
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, edi
        mov edi, dword ptr ss : [ebp+0x350]
        mov edx, ecx
        shr ecx, 2
        lea eax, ss:[ebp+0x34C]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_48b455 : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_48b459 : nop
        mov eax, dword ptr ss : [ebp+0x354]
        cmp eax, edi
        jae public_48b469
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        public_48b469 : nop
        cmp edi, ebx
        jbe public_48b4ad
        mov ecx, dword ptr ss : [ebp+0x350]
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call dword ptr ds : [public_5c709c]
        mov esi, dword ptr ss : [ebp+0x354]
        add esp, 0xC
        push ebx
        sub esi, edi
        push esi
        lea ecx, ss:[ebp+0x34C]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_48b4ad
        mov eax, dword ptr ss : [ebp+0x350]
        mov dword ptr ss : [ebp+0x354], esi
        mov byte ptr ds : [esi+eax], bl
        public_48b4ad : nop
        lea ecx, ss:[ebp+0x35C]
        call public_42cc30
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        mov dword ptr ss : [ebp+0x44C], ebx
        mov byte ptr ss : [ebp+0x458], bl
        pop esi
        mov dword ptr ss : [ebp+0x448], 0xFFFFFFFF
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x48b2e0)
    }
}

#undef public_48b455
#undef public_48b459
#undef public_48b469
#undef public_48b4ad
