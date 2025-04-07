#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f87a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0cbf);

#define public_6f87ab0 _public_6f87ab0
#define public_6f87ac0 _public_6f87ac0
#define public_6f87ad0 _public_6f87ad0
#define public_6f87ae0 _public_6f87ae0
#define public_6f87afa _public_6f87afa
#define public_6f87b25 _public_6f87b25
#define public_6f87b2d _public_6f87b2d
#define public_6f87ba0 _public_6f87ba0
#define public_6f87bcb _public_6f87bcb

PROC_DECLARE(0x6f87a50, internal_6f87a50, public_6f87a50);
extern "C" NAKED register_t __cdecl internal_6f87a50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0cbf @0x6f87a52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0cbf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        xor esi, esi
        mov dword ptr ss : [esp+0x10], esi
        mov al, byte ptr ss : [esp+0x38]
        mov edi, ecx
        push esi
        push esi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x20], al
        call public_6f93790
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x14], offset public_6fbc7cc
        mov ecx, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        mov dword ptr ss : [esp+0x2C], 1
        je public_6f87b2d
        push ebp
        public_6f87ab0 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        test edx, edx
        je public_6f87ac0
        mov ecx, dword ptr ds : [esi+8]
        cmp dword ptr ds : [ecx+0x60], edx
        jne public_6f87b25
        public_6f87ac0 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        test ecx, ecx
        je public_6f87ad0
        mov edx, dword ptr ds : [esi+8]
        cmp dword ptr ds : [edx+0x3C], ecx
        jne public_6f87b25
        public_6f87ad0 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        test ecx, ecx
        je public_6f87ae0
        mov edx, dword ptr ds : [esi+8]
        test dword ptr ds : [edx+0x40], ecx
        je public_6f87b25
        public_6f87ae0 : nop
        mov ebp, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push 0xC
        mov ebx, eax
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_6f87afa
        mov ebp, eax
        public_6f87afa : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[esi+8]
        push ecx
        add eax, 8
        push eax
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0x18]
        add esp, 8
        inc eax
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x20]
        public_6f87b25 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x28]
        jne public_6f87ab0
        pop ebp
        public_6f87b2d : nop
        mov ebx, dword ptr ss : [esp+0x34]
        mov al, byte ptr ss : [esp+0x18]
        lea esi, ds:[ebx+4]
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x38]
        push edx
        mov ecx, esi
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edi
        push edx
        mov ecx, esi
        call public_6ed0230
        mov dword ptr ds : [ebx], offset public_6fbc7cc
        mov dword ptr ss : [esp+0x10], 1
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], offset public_6fbc7cc
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x2C], 0
        mov esi, eax
        mov dword ptr ss : [esp+0x38], ecx
        je public_6f87bcb
        public_6f87ba0 : nop
        push 0
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x40]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x38], esi
        jne public_6f87ba0
        mov eax, dword ptr ss : [esp+0x1C]
        public_6f87bcb : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 0x10
        UNREACHABLE_TRAP(0x6f87a50)
    }
}

#undef public_6f87ab0
#undef public_6f87ac0
#undef public_6f87ad0
#undef public_6f87ae0
#undef public_6f87afa
#undef public_6f87b25
#undef public_6f87b2d
#undef public_6f87ba0
#undef public_6f87bcb
