#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b5d0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624724b);

#define public_6204155 _public_6204155
#define public_6204179 _public_6204179
#define public_620417d _public_620417d
#define public_6204182 _public_6204182
#define public_62041dc _public_62041dc
#define public_62041e3 _public_62041e3
#define public_62041e5 _public_62041e5
#define public_62041fe _public_62041fe
#define public_6204219 _public_6204219
#define public_620422c _public_620422c
#define public_6204239 _public_6204239
#define public_620423f _public_620423f
#define public_6204241 _public_6204241

PROC_DECLARE(0x6204120, internal_6204120, public_6204120);
extern "C" NAKED register_t __cdecl internal_6204120()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624724b @0x6204128*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624724b
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
        xor edi, edi
        cmp eax, 0x14
        jne public_620422c
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6204155 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620417d
        test cl, cl
        je public_6204179
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620417d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6204155
        public_6204179 : nop
        xor eax, eax
        jmp public_6204182
        public_620417d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6204182 : nop
        test eax, eax
        jne public_620422c
        push 0x18
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_62041e3
        mov ecx, esi
        call public_623b5d0
        lea eax, ds:[esi+0xC]
        mov dword ptr ds : [eax], offset public_624b5c8
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_624b594
        mov dword ptr ds : [esi+4], offset public_624b584
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        mov dword ptr ds : [esi+8], ecx
        jne public_62041dc
        mov dword ptr ds : [esi+8], eax
        jmp public_62041e5
        public_62041dc : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_62041e5
        public_62041e3 : nop
        xor esi, esi
        public_62041e5 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_62041fe
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], esi
        jmp public_6204241
        public_62041fe : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        mov edi, eax
        test edi, edi
        je public_6204239
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6204219
        mov dword ptr ds : [eax], 0
        public_6204219 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx], eax
        jmp public_620423f
        public_620422c : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], edi
        jmp public_6204241
        public_6204239 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], esi
        public_620423f : nop
        mov eax, edi
        public_6204241 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6204120)
    }
}

#undef public_6204155
#undef public_6204179
#undef public_620417d
#undef public_6204182
#undef public_62041dc
#undef public_62041e3
#undef public_62041e5
#undef public_62041fe
#undef public_6204219
#undef public_620422c
#undef public_6204239
#undef public_620423f
#undef public_6204241
