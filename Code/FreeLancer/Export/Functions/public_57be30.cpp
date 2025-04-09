#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564280);
CLANG_FORWARD_PROC_SYMBOL(public_57be30);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3ec6);

#define public_57be9e _public_57be9e
#define public_57bea0 _public_57bea0
#define public_57bec4 _public_57bec4
#define public_57bee0 _public_57bee0
#define public_57bf05 _public_57bf05
#define public_57bf61 _public_57bf61
#define public_57bf6b _public_57bf6b
#define public_57bf85 _public_57bf85

PROC_DECLARE(0x57be30, internal_57be30, public_57be30);
extern "C" NAKED register_t __cdecl internal_57be30()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c3ec6 @0x57be38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3ec6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov byte ptr ss : [ebp+0x52B], al
        je public_57bf6b
        mov eax, dword ptr ss : [ebp+0x52C]
        xor esi, esi
        cmp eax, esi
        jne public_57bf85
        call dword ptr ds : [public_5c6e80]
        test eax, eax
        je public_57bf85
        push 0xA0
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], esi
        je public_57be9e
        push ebp
        mov ecx, eax
        call public_564280
        jmp public_57bea0
        public_57be9e : nop
        xor eax, eax
        public_57bea0 : nop
        mov dword ptr ss : [ebp+0x52C], eax
        mov ebx, dword ptr ss : [ebp+0x4CC]
        cmp ebx, ebx
        mov eax, dword ptr ss : [ebp+0x4C8]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], ebx
        je public_57bf05
        sub ebx, eax
        public_57bec4 : nop
        mov ecx, dword ptr ds : [ebx+eax]
        lea edx, ds:[ebx+eax]
        mov dword ptr ds : [eax], ecx
        mov cx, word ptr ds : [edx]
        mov esi, edx
        mov edi, 0xFFFFFFFE
        mov word ptr ds : [eax], cx
        sub esi, eax
        lea ecx, ds:[eax+2]
        sub edi, eax
        public_57bee0 : nop
        mov dl, byte ptr ds : [esi+ecx]
        mov byte ptr ds : [ecx], dl
        inc ecx
        lea edx, ds:[edi+ecx]
        cmp edx, 2
        jb public_57bee0
        mov ecx, dword ptr ds : [ebx+eax+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, 0xC
        lea edx, ds:[ebx+eax]
        cmp edx, ecx
        jne public_57bec4
        xor esi, esi
        public_57bf05 : nop
        mov dword ptr ss : [ebp+0x4CC], eax
        mov ecx, ebp
        mov dword ptr ss : [ebp+0x4A4], esi
        mov dword ptr ss : [ebp+0x4A0], esi
        mov dword ptr ss : [ebp+0x49C], esi
        call public_57d330
        mov ecx, dword ptr ss : [ebp+0x52C]
        cmp ecx, esi
        je public_57bf85
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        push 0xA0
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], 1
        je public_57bf61
        push ebp
        mov ecx, eax
        call public_564280
        mov dword ptr ss : [ebp+0x52C], eax
        jmp public_57bf85
        public_57bf61 : nop
        xor eax, eax
        mov dword ptr ss : [ebp+0x52C], eax
        jmp public_57bf85
        public_57bf6b : nop
        mov ecx, dword ptr ss : [ebp+0x52C]
        test ecx, ecx
        je public_57bf85
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp+0x52C], 0
        public_57bf85 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x57be30)
    }
}

#undef public_57be9e
#undef public_57bea0
#undef public_57bec4
#undef public_57bee0
#undef public_57bf05
#undef public_57bf61
#undef public_57bf6b
#undef public_57bf85
