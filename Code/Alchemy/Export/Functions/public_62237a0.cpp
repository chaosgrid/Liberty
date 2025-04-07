#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6248d4b);

#define public_62237d7 _public_62237d7
#define public_62237f7 _public_62237f7
#define public_62237fb _public_62237fb
#define public_6223800 _public_6223800
#define public_622387f _public_622387f
#define public_6223881 _public_6223881
#define public_622389a _public_622389a
#define public_62238bb _public_62238bb
#define public_62238ce _public_62238ce
#define public_62238db _public_62238db
#define public_62238e1 _public_62238e1
#define public_62238e3 _public_62238e3

PROC_DECLARE(0x62237a0, internal_62237a0, public_62237a0);
extern "C" NAKED register_t __cdecl internal_62237a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6248d4b @0x62237a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248d4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov eax, dword ptr ss : [ebp]
        xor ebx, ebx
        xor edi, edi
        cmp eax, 8
        jne public_62238ce
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_62237d7 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_62237fb
        cmp cl, bl
        je public_62237f7
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_62237fb
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_62237d7
        public_62237f7 : nop
        xor eax, eax
        jmp public_6223800
        public_62237fb : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6223800 : nop
        cmp eax, ebx
        jne public_62238ce
        push 0xB8
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_622387f
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624bf40
        mov ecx, esi
        call public_623fb80
        mov eax, 1
        mov dword ptr ds : [esi+0x98], ebx
        mov byte ptr ds : [esi+0x96], al
        mov dword ptr ds : [esi], offset public_624dc60
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624dbb8
        mov dword ptr ds : [esi], offset public_624db58
        mov dword ptr ds : [edi+0xB4], eax
        jmp public_6223881
        public_622387f : nop
        xor edi, edi
        public_6223881 : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_622389a
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_62238e3
        public_622389a : nop
        mov edx, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        mov ebp, eax
        cmp ebp, ebx
        je public_62238db
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, ebx
        je public_62238bb
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_62238bb : nop
        push edi
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edx], eax
        jmp public_62238e1
        public_62238ce : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_62238e3
        public_62238db : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], edi
        public_62238e1 : nop
        mov eax, ebp
        public_62238e3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x62237a0)
    }
}

#undef public_62237d7
#undef public_62237f7
#undef public_62237fb
#undef public_6223800
#undef public_622387f
#undef public_6223881
#undef public_622389a
#undef public_62238bb
#undef public_62238ce
#undef public_62238db
#undef public_62238e1
#undef public_62238e3
