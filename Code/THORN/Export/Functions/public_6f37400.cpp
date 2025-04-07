#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34830);
CLANG_FORWARD_PROC_SYMBOL(public_6f34850);
CLANG_FORWARD_PROC_SYMBOL(public_6f37570);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58aeb);

#define public_6f37437 _public_6f37437
#define public_6f37457 _public_6f37457
#define public_6f3745b _public_6f3745b
#define public_6f37460 _public_6f37460
#define public_6f374f6 _public_6f374f6
#define public_6f374fd _public_6f374fd
#define public_6f374ff _public_6f374ff
#define public_6f37512 _public_6f37512
#define public_6f37529 _public_6f37529
#define public_6f37543 _public_6f37543
#define public_6f37550 _public_6f37550
#define public_6f37552 _public_6f37552
#define public_6f37558 _public_6f37558

PROC_DECLARE(0x6f37400, internal_6f37400, public_6f37400);
extern "C" NAKED register_t __cdecl internal_6f37400()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f58aeb @0x6f37408*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58aeb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp eax, 0x14
        jne public_6f37543
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6f37437 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6f3745b
        cmp cl, bl
        je public_6f37457
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6f3745b
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6f37437
        public_6f37457 : nop
        xor eax, eax
        jmp public_6f37460
        public_6f3745b : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f37460 : nop
        cmp eax, ebx
        jne public_6f37543
        push 0x80
        call public_6f57e9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6f374fd
        mov dword ptr ds : [esi], offset public_6f5ac10
        mov dword ptr ds : [esi+4], offset public_6f5abec
        lea edi, ds:[esi+0x10]
        mov dword ptr ds : [esi+8], offset public_6f5abd4
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], ebx
        call public_6f37570
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea edi, ds:[esi+0x40]
        mov ecx, edi
        call public_6f37570
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea eax, ds:[esi+0x74]
        mov dword ptr ds : [eax], offset public_6f5abc8
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6f5ab88
        mov dword ptr ds : [esi+4], offset public_6f5ab68
        mov dword ptr ds : [esi+8], offset public_6f5ab50
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x70], ecx
        jne public_6f374f6
        mov dword ptr ds : [esi+0x70], eax
        jmp public_6f374ff
        public_6f374f6 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6f374ff
        public_6f374fd : nop
        xor esi, esi
        public_6f374ff : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6f37512
        mov eax, 0xFFFFFFFC
        jmp public_6f37552
        public_6f37512 : nop
        push ebp
        mov ecx, esi
        call public_6f34830
        mov edi, eax
        cmp edi, ebx
        je public_6f37550
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_6f37529
        mov dword ptr ds : [eax], ebx
        public_6f37529 : nop
        mov ecx, esi
        call public_6f34850
        push esi
        call public_6f57e26
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], ebx
        add esp, 4
        mov eax, edi
        jmp public_6f37558
        public_6f37543 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_6f37558
        public_6f37550 : nop
        mov eax, edi
        public_6f37552 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], esi
        public_6f37558 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f37400)
    }
}

#undef public_6f37437
#undef public_6f37457
#undef public_6f3745b
#undef public_6f37460
#undef public_6f374f6
#undef public_6f374fd
#undef public_6f374ff
#undef public_6f37512
#undef public_6f37529
#undef public_6f37543
#undef public_6f37550
#undef public_6f37552
#undef public_6f37558
