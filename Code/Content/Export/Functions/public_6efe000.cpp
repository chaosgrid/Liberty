#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efe000);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac9a1);

#define public_6efe085 _public_6efe085
#define public_6efe08d _public_6efe08d
#define public_6efe0a6 _public_6efe0a6
#define public_6efe0b5 _public_6efe0b5
#define public_6efe0bf _public_6efe0bf
#define public_6efe0c8 _public_6efe0c8

PROC_DECLARE(0x6efe000, internal_6efe000, public_6efe000);
extern "C" NAKED register_t __cdecl internal_6efe000()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac9a1 @0x6efe002*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac9a1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        xor edx, edx
        cmp ebp, edx
        mov dword ptr ss : [esp+0x10], edx
        je public_6efe0c8
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], ecx
        push esi
        lea eax, ds:[ebx+8]
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[ebp+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        push edi
        lea esi, ds:[ebx+0x14]
        lea edi, ss:[ebp+0x14]
        mov ecx, 9
        rep movsd
        mov cl, byte ptr ds : [ebx+0x38]
        mov byte ptr ss : [ebp+0x38], cl
        mov eax, dword ptr ds : [ebx+0x3C]
        cmp eax, edx
        je public_6efe085
        mov ecx, dword ptr ds : [ebx+0x40]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6efe085 : nop
        test edx, edx
        mov eax, edx
        jge public_6efe08d
        xor eax, eax
        public_6efe08d : nop
        imul eax, 0x34
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+0x3C], eax
        mov edx, dword ptr ds : [ebx+0x40]
        mov ebx, dword ptr ds : [ebx+0x3C]
        add esp, 4
        cmp ebx, edx
        je public_6efe0bf
        public_6efe0a6 : nop
        test eax, eax
        je public_6efe0b5
        mov ecx, 0xD
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_6efe0b5 : nop
        add ebx, 0x34
        add eax, 0x34
        cmp ebx, edx
        jne public_6efe0a6
        public_6efe0bf : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x40], eax
        mov dword ptr ss : [ebp+0x44], eax
        pop ebx
        public_6efe0c8 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6efe000)
    }
}

#undef public_6efe085
#undef public_6efe08d
#undef public_6efe0a6
#undef public_6efe0b5
#undef public_6efe0bf
#undef public_6efe0c8
