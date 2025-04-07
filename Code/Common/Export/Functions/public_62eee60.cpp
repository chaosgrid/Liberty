#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62eee60);
CLANG_FORWARD_PROC_SYMBOL(public_62fcce0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63954a6);

#define public_62eeee8 _public_62eeee8
#define public_62eef06 _public_62eef06
#define public_62eef3d _public_62eef3d
#define public_62eef45 _public_62eef45
#define public_62eef4b _public_62eef4b
#define public_62eef68 _public_62eef68
#define public_62eef70 _public_62eef70
#define public_62eef7a _public_62eef7a
#define public_62eef96 _public_62eef96
#define public_62eef9e _public_62eef9e
#define public_62eefa4 _public_62eefa4
#define public_62eefc0 _public_62eefc0
#define public_62eefce _public_62eefce
#define public_62eefd8 _public_62eefd8

PROC_DECLARE(0x62eee60, internal_62eee60, public_62eee60);
extern "C" NAKED register_t __cdecl internal_62eee60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63954a6 @0x62eee62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63954a6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], edx
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x18], eax
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], ecx
        mov dl, byte ptr ds : [esi+0x20]
        lea ebx, ds:[edi+0x20]
        push 0x10
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ds : [ebx], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov ecx, dword ptr ds : [esi+0x24]
        mov ebp, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x2C], eax
        je public_62eef06
        public_62eeee8 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[ebp+8]
        push ecx
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        call public_62fcce0
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x10]
        jne public_62eeee8
        public_62eef06 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+0x2C], ecx
        mov edx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [edi+0x30], edx
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x34], eax
        mov ecx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [edi+0x38], ecx
        mov edx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [edi+0x3C], edx
        mov al, byte ptr ds : [esi+0x40]
        mov byte ptr ds : [edi+0x40], al
        mov ecx, dword ptr ds : [esi+0x44]
        test ecx, ecx
        mov dword ptr ss : [esp+0x24], 0
        jne public_62eef3d
        xor eax, eax
        jmp public_62eef45
        public_62eef3d : nop
        mov eax, dword ptr ds : [esi+0x48]
        sub eax, ecx
        sar eax, 2
        public_62eef45 : nop
        test eax, eax
        jge public_62eef4b
        xor eax, eax
        public_62eef4b : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [edi+0x44], eax
        mov edx, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        add esp, 4
        cmp ecx, edx
        je public_62eef7a
        public_62eef68 : nop
        test eax, eax
        je public_62eef70
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        public_62eef70 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_62eef68
        public_62eef7a : nop
        mov dword ptr ds : [edi+0x48], eax
        mov dword ptr ds : [edi+0x4C], eax
        mov dl, byte ptr ds : [esi+0x50]
        mov byte ptr ds : [edi+0x50], dl
        mov ecx, dword ptr ds : [esi+0x54]
        test ecx, ecx
        mov byte ptr ss : [esp+0x24], 1
        jne public_62eef96
        xor eax, eax
        jmp public_62eef9e
        public_62eef96 : nop
        mov eax, dword ptr ds : [esi+0x58]
        sub eax, ecx
        sar eax, 3
        public_62eef9e : nop
        test eax, eax
        jge public_62eefa4
        xor eax, eax
        public_62eefa4 : nop
        shl eax, 3
        push eax
        call public_6391d9c
        mov dword ptr ds : [edi+0x54], eax
        mov ecx, dword ptr ds : [esi+0x58]
        mov esi, dword ptr ds : [esi+0x54]
        add esp, 4
        cmp esi, ecx
        je public_62eefd8
        lea ecx, ds:[ecx]
        public_62eefc0 : nop
        test eax, eax
        je public_62eefce
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        public_62eefce : nop
        add esi, 8
        add eax, 8
        cmp esi, ecx
        jne public_62eefc0
        public_62eefd8 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+0x58], eax
        mov dword ptr ds : [edi+0x5C], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x62eee60)
    }
}

#undef public_62eeee8
#undef public_62eef06
#undef public_62eef3d
#undef public_62eef45
#undef public_62eef4b
#undef public_62eef68
#undef public_62eef70
#undef public_62eef7a
#undef public_62eef96
#undef public_62eef9e
#undef public_62eefa4
#undef public_62eefc0
#undef public_62eefce
#undef public_62eefd8
