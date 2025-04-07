#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271c60);
CLANG_FORWARD_PROC_SYMBOL(public_62b9530);
CLANG_FORWARD_PROC_SYMBOL(public_630cb70);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63962f7);

#define public_630cc43 _public_630cc43
#define public_630cc4b _public_630cc4b
#define public_630cc53 _public_630cc53
#define public_630cc76 _public_630cc76
#define public_630cc8e _public_630cc8e
#define public_630ccac _public_630ccac
#define public_630ccb4 _public_630ccb4
#define public_630ccba _public_630ccba
#define public_630cce1 _public_630cce1

PROC_DECLARE(0x630cb70, internal_630cb70, public_630cb70);
extern "C" NAKED register_t __cdecl internal_630cb70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63962f7 @0x630cb72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63962f7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+8], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_630cce1
        push ebx
        add edi, 4
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi-4], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+8], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0xC], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x10], edx
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x14], eax
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x1C], edx
        mov al, byte ptr ds : [esi+0x24]
        lea ebx, ds:[edi+0x20]
        push 0x10
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ds : [ebx], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ebp
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, ebx
        call public_6271c60
        mov ecx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [edi+0x2C], ecx
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x30], edx
        mov eax, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [edi+0x34], eax
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [edi+0x38], ecx
        mov edx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [edi+0x3C], edx
        mov al, byte ptr ds : [esi+0x44]
        mov byte ptr ds : [edi+0x40], al
        mov eax, dword ptr ds : [esi+0x48]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x20], 1
        jne public_630cc43
        xor ecx, ecx
        jmp public_630cc4b
        public_630cc43 : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        sub ecx, eax
        sar ecx, 2
        public_630cc4b : nop
        cmp ecx, ebp
        mov eax, ecx
        jge public_630cc53
        xor eax, eax
        public_630cc53 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [edi+0x44], eax
        mov ecx, dword ptr ds : [esi+0x4C]
        mov ebp, dword ptr ds : [esi+0x48]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov ebx, eax
        je public_630cc8e
        public_630cc76 : nop
        push ebp
        push ebx
        call public_630cd00
        mov eax, dword ptr ss : [esp+0x34]
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, eax
        jne public_630cc76
        public_630cc8e : nop
        mov dword ptr ds : [edi+0x48], ebx
        mov dword ptr ds : [edi+0x4C], ebx
        mov dl, byte ptr ds : [esi+0x54]
        add edi, 0x50
        mov byte ptr ds : [edi], dl
        mov ecx, dword ptr ds : [esi+0x58]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 2
        jne public_630ccac
        xor eax, eax
        jmp public_630ccb4
        public_630ccac : nop
        mov eax, dword ptr ds : [esi+0x5C]
        sub eax, ecx
        sar eax, 3
        public_630ccb4 : nop
        test eax, eax
        jge public_630ccba
        xor eax, eax
        public_630ccba : nop
        shl eax, 3
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi+0x5C]
        mov esi, dword ptr ds : [esi+0x58]
        push eax
        push ecx
        push esi
        mov ecx, edi
        call public_62b9530
        pop esi
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop ebx
        public_630cce1 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x630cb70)
    }
}

#undef public_630cc43
#undef public_630cc4b
#undef public_630cc53
#undef public_630cc76
#undef public_630cc8e
#undef public_630ccac
#undef public_630ccb4
#undef public_630ccba
#undef public_630cce1
