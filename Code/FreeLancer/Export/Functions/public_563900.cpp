#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_562a40);
CLANG_FORWARD_PROC_SYMBOL(public_562a50);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1e43);

#define public_5639fa _public_5639fa
#define public_5639fc _public_5639fc
#define public_563a3d _public_563a3d

PROC_DECLARE(0x563900, internal_563900, public_563900);
extern "C" NAKED register_t __cdecl internal_563900()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1e43 @0x563902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1e43
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x39C
        mov edi, ecx
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_5639fa
        mov ecx, esi
        call public_59f860
/*FIXUP push offset _public_562a50 @0x563943*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_562a50
/*FIXUP push offset _public_562a40 @0x563948*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_562a40
        push 5
        push 0xC
        lea eax, ds:[esi+0x338]
        push eax
        mov byte ptr ss : [esp+0x2C], 1
        call public_5b7fba
        mov dword ptr ds : [esi+0x378], offset public_5e20a8
        mov byte ptr ds : [esi+0x37C], bl
        mov byte ptr ds : [esi+0x37D], bl
        mov byte ptr ds : [esi+0x37E], bl
        mov byte ptr ds : [esi+0x37F], bl
        mov byte ptr ds : [esi+0x380], bl
        mov byte ptr ds : [esi+0x381], bl
        mov dword ptr ds : [esi+0x384], ebx
        mov dword ptr ds : [esi+0x388], 0x3E8
        mov byte ptr ds : [esi+0x38C], 1
        mov ecx, dword ptr ds : [public_67ecb8]
        mov dword ptr ds : [esi+0x390], ecx
        mov edx, dword ptr ds : [public_67ecb8]
        mov dword ptr ds : [esi+0x394], edx
        mov byte ptr ds : [esi+0x398], 1
        mov byte ptr ds : [esi+0x399], bl
        mov byte ptr ds : [esi+0x39A], 1
        mov dword ptr ds : [esi], offset public_5e20ec
        mov dword ptr ds : [esi+0x7C], offset public_5e20e0
        mov dword ptr ds : [esi+0x374], ebx
        mov dword ptr ds : [esi+0x32C], ebx
        mov dword ptr ds : [esi+0x330], ebx
        mov dword ptr ds : [esi+0x334], ebx
        jmp public_5639fc
        public_5639fa : nop
        xor esi, esi
        public_5639fc : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push ecx
        add edi, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_563a3d
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_563a3d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x563900)
    }
}

#undef public_5639fa
#undef public_5639fc
#undef public_563a3d
