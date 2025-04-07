#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6227950);
CLANG_FORWARD_PROC_SYMBOL(public_6227ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_62490e0);

#define public_6227f29 _public_6227f29
#define public_6227f7e _public_6227f7e
#define public_6227fda _public_6227fda
#define public_622800b _public_622800b
#define public_6228049 _public_6228049
#define public_6228063 _public_6228063
#define public_6228079 _public_6228079
#define public_622808b _public_622808b

PROC_DECLARE(0x6227ef0, internal_6227ef0, public_6227ef0);
extern "C" NAKED register_t __cdecl internal_6227ef0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62490e0 @0x6227ef8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62490e0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        lea ecx, ss:[esp+0x28]
        lea edx, ss:[esp+0x24]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x50]
        push ecx
        lea ecx, ss:[esp+0x34]
        push edx
        mov eax, dword ptr ds : [edi]
        push ecx
        push edi
        call dword ptr ds : [eax+0x28]
        xor ebx, ebx
        xor eax, eax
        public_6227f29 : nop
        mov dl, byte ptr ss : [esp+eax*4+0x30]
        mov byte ptr ss : [esp+eax+0x24], dl
        inc eax
        cmp eax, 3
        jl public_6227f29
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x28]
        push edx
        push edi
        call dword ptr ds : [ecx+0x1C]
        mov ebp, dword ptr ss : [esp+0x28]
        mov esi, 0x1FF
        cmp ebp, esi
        mov ebp, dword ptr ss : [esp+0x4C]
        sete al
        dec al
        lea ecx, ss:[esp+0x24]
        push 4
        and al, 0x80
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x2F], al
        call public_6222ee0
        cmp dword ptr ss : [esp+0x28], esi
        je public_622808b
        mov dword ptr ss : [esp+0x20], ebx
        public_6227f7e : nop
        mov dword ptr ss : [esp+0x1C], ebx
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebx
        push eax
        push ecx
        push edi
        call dword ptr ds : [edx+0x14]
        mov esi, dword ptr ss : [esp+0x1C]
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x30]
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x38]
        lea ecx, ss:[esp+0x13]
        push 1
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x54], al
        call public_6222ee0
        lea edx, ss:[esp+0x4C]
        push 1
        push edx
        mov ecx, ebp
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x4C]
        mov byte ptr ss : [esp+0x18], bl
        cmp al, bl
        jbe public_6228063
        public_6227fda : nop
        mov dword ptr ss : [esp+0x14], ebx
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x2C]
        and edi, 0xFF
        push ecx
        push edi
        push esi
        mov byte ptr ss : [esp+0x50], 1
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_622800b
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x14], ebx
        public_622800b : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edi
        push esi
        call dword ptr ds : [eax+0x24]
        lea edx, ss:[esp+0x2C]
        push 4
        push edx
        mov ecx, ebp
        call public_6222ee0
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push ebp
        call public_6227950
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        cmp eax, ebx
        mov byte ptr ss : [esp+0x44], bl
        je public_6228049
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], ebx
        public_6228049 : nop
        mov al, byte ptr ss : [esp+0x18]
        mov cl, byte ptr ss : [esp+0x4C]
        inc al
        cmp al, cl
        mov byte ptr ss : [esp+0x18], al
        jb public_6227fda
        mov edi, dword ptr ss : [esp+0x50]
        public_6228063 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        cmp eax, ebx
        je public_6228079
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6228079 : nop
        mov eax, dword ptr ss : [esp+0x20]
        inc eax
        cmp eax, 9
        mov dword ptr ss : [esp+0x20], eax
        jl public_6227f7e
        public_622808b : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6227ef0)
    }
}

#undef public_6227f29
#undef public_6227f7e
#undef public_6227fda
#undef public_622800b
#undef public_6228049
#undef public_6228063
#undef public_6228079
#undef public_622808b
