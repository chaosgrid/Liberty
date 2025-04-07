#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d29f0e _public_6d29f0e
#define public_6d29f2a _public_6d29f2a
#define public_6d29f41 _public_6d29f41
#define public_6d29fc9 _public_6d29fc9
#define public_6d29fd1 _public_6d29fd1
#define public_6d29ff5 _public_6d29ff5
#define public_6d29ffd _public_6d29ffd
#define public_6d2a002 _public_6d2a002
#define public_6d2a026 _public_6d2a026
#define public_6d2a028 _public_6d2a028
#define public_6d2a035 _public_6d2a035
#define public_6d2a041 _public_6d2a041

PROC_DECLARE(0x6d29ed0, internal_6d29ed0, public_6d29ed0);
extern "C" NAKED register_t __cdecl internal_6d29ed0()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d2a041
        push ebx
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        ja public_6d29f41
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d29f0e
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d29f0e : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d29ffd
        public_6d29f2a : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d29ffd
        xor eax, eax
        jmp public_6d2a002
        public_6d29f41 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d29fd1
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d29fd1
        push ebx
        call dword ptr ds : [public_6d64ba0]
        mov ecx, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d29f62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea edx, ss:[esp+0x18]
        push edx
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x34]
        push eax
        push ecx
        mov word ptr ss : [esp+0x24], di
        mov word ptr ss : [esp+0x26], di
        call public_6d40890
        add esp, 0x14
        test al, al
        jne public_6d29ff5
        push ebx
        call dword ptr ds : [public_6d64bac]
        add esp, 4
        cmp di, ax
        mov dword ptr ss : [esp+0x14], eax
        je public_6d29fc9
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d29fa2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        add esp, 0x10
        test al, al
        jne public_6d29ff5
        public_6d29fc9 : nop
        mov edi, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        public_6d29fd1 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d29f2a
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d29f2a
        jmp public_6d29ffd
        public_6d29ff5 : nop
        mov edi, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        public_6d29ffd : nop
        mov eax, 1
        public_6d2a002 : nop
        movzx edx, byte ptr ds : [esi+4]
        cmp edx, eax
        pop esi
        pop ebx
        je public_6d2a041
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        add edi, 2
        test ecx, ecx
        je public_6d2a035
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebp
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2a026 : nop
        je public_6d2a041
        public_6d2a028 : nop
        pop edi
        mov eax, 1
        pop ebp
        add esp, 0x10
        ret 8
        public_6d2a035 : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d2a028
        cmp dword ptr ss : [ebp+8], edi
        jmp public_6d2a026
        public_6d2a041 : nop
        pop edi
        xor eax, eax
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d29ed0)
    }
}

#undef public_6d29f0e
#undef public_6d29f2a
#undef public_6d29f41
#undef public_6d29fc9
#undef public_6d29fd1
#undef public_6d29ff5
#undef public_6d29ffd
#undef public_6d2a002
#undef public_6d2a026
#undef public_6d2a028
#undef public_6d2a035
#undef public_6d2a041
