#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3710);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab1b6);

#define public_6ed3749 _public_6ed3749
#define public_6ed375d _public_6ed375d
#define public_6ed3770 _public_6ed3770
#define public_6ed37a2 _public_6ed37a2

PROC_DECLARE(0x6ed3710, internal_6ed3710, public_6ed3710);
extern "C" NAKED register_t __cdecl internal_6ed3710()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab1b6 @0x6ed3712*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab1b6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, dword ptr ds : [edi+0x40]
        xor esi, esi
        cmp ecx, esi
        mov dword ptr ss : [esp+0x1C], 1
        je public_6ed3749
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x40], esi
        public_6ed3749 : nop
        mov ecx, dword ptr ds : [edi+0x3C]
        cmp ecx, esi
        mov byte ptr ss : [esp+0x1C], 0
        je public_6ed375d
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x3C], esi
        public_6ed375d : nop
        mov ebx, dword ptr ds : [edi+0x34]
        mov ebp, dword ptr ds : [ebx]
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_6ed37a2
        mov edi, edi
        public_6ed3770 : nop
        mov esi, ebp
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov ebp, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+0x14]
        mov dword ptr ds : [edx+4], eax
        call public_6f15350
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0x38]
        add esp, 4
        dec ecx
        cmp ebp, ebx
        mov dword ptr ds : [edi+0x38], ecx
        jne public_6ed3770
        xor esi, esi
        public_6ed37a2 : nop
        mov ecx, dword ptr ds : [edi+0x34]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ds : [edi+0x34], esi
        mov dword ptr ds : [edi+0x38], esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ed3710)
    }
}

#undef public_6ed3749
#undef public_6ed375d
#undef public_6ed3770
#undef public_6ed37a2
