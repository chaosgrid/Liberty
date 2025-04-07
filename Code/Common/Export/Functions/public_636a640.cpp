#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_636a640);
CLANG_FORWARD_PROC_SYMBOL(public_636a860);
CLANG_FORWARD_JUMP_SYMBOL(public_6398708);

#define public_636a67f _public_636a67f
#define public_636a698 _public_636a698
#define public_636a6bf _public_636a6bf
#define public_636a6ff _public_636a6ff

PROC_DECLARE(0x636a640, internal_636a640, public_636a640);
extern "C" NAKED register_t __cdecl internal_636a640()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398708 @0x636a642*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398708
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov edi, ecx
        mov word ptr ss : [esp+0xC], bp
        mov word ptr ss : [esp+0xE], bp
        mov dword ptr ss : [esp+0x10], ebp
        mov eax, dword ptr ds : [edi+0x14]
        xor esi, esi
        mov si, word ptr ds : [eax+2]
        mov dword ptr ss : [esp+0x1C], ebp
        cmp esi, ebp
        je public_636a6bf
        push ebx
        public_636a67f : nop
        mov ebx, dword ptr ds : [eax+esi*8+4]
        mov ax, word ptr ss : [esp+0x10]
        cmp word ptr ss : [esp+0x12], ax
        jb public_636a698
        lea ecx, ss:[esp+0x10]
        call public_63441a0
        public_636a698 : nop
        mov ecx, dword ptr ss : [esp+0x12]
        mov edx, dword ptr ss : [esp+0x14]
        and ecx, 0xFFFF
        mov dword ptr ds : [edx+ecx*4], ebx
        inc word ptr ss : [esp+0x12]
        mov eax, dword ptr ds : [edi+0x14]
        xor ecx, ecx
        mov cx, word ptr ds : [eax+esi*8+2]
        mov esi, ecx
        cmp esi, ebp
        jne public_636a67f
        pop ebx
        public_636a6bf : nop
        mov edx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi+0x14]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        mov dword ptr ds : [edi+8], edx
        call public_636a860
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+ecx*8+4], eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edx
        je public_636a6ff
        cmp eax, ebp
        je public_636a6ff
        push eax
        call public_6343fb0
        add esp, 4
        public_636a6ff : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x636a640)
    }
}

#undef public_636a67f
#undef public_636a698
#undef public_636a6bf
#undef public_636a6ff
