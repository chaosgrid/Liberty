#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0958);

#define public_53504b _public_53504b
#define public_535050 _public_535050
#define public_535064 _public_535064
#define public_53508e _public_53508e
#define public_535090 _public_535090
#define public_5350c4 _public_5350c4
#define public_5350e3 _public_5350e3
#define public_5350e5 _public_5350e5
#define public_5350f6 _public_5350f6
#define public_535151 _public_535151
#define public_53517b _public_53517b
#define public_53519f _public_53519f
#define public_5351a1 _public_5351a1
#define public_5351b6 _public_5351b6
#define public_5351bd _public_5351bd

PROC_DECLARE(0x535010, internal_535010, public_535010);
extern "C" NAKED register_t __cdecl internal_535010()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0958 @0x535018*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0958
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x44]
        xor ebx, ebx
        cmp esi, 0xFFFFFFFF
        push edi
        mov edi, ecx
        mov ebp, 0xFFFFFFFB
        je public_53504b
        call public_54bb00
        cmp esi, eax
        mov byte ptr ss : [esp+0x48], bl
        jne public_535050
        public_53504b : nop
        mov byte ptr ss : [esp+0x48], 1
        public_535050 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_535064
        cmp byte ptr ss : [esp+0x48], bl
        je public_53519f
        public_535064 : nop
        lea eax, ds:[edi-4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        je public_53508e
        add eax, 0xC
        cmp eax, ebx
        je public_53508e
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_53508e
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_535090
        public_53508e : nop
        xor eax, eax
        public_535090 : nop
        mov edx, dword ptr ss : [esp+0x40]
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        mov ebp, eax
        cmp ebp, ebx
        je public_5351bd
        mov edi, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x10], ebx
        je public_5351b6
        public_5350c4 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_5350e3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_5350e5
        public_5350e3 : nop
        xor eax, eax
        public_5350e5 : nop
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_5c699c]
        cmp eax, ebx
        jne public_5350f6
        inc dword ptr ss : [esp+0x10]
        public_5350f6 : nop
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        cmp esi, eax
        jne public_5350c4
        cmp dword ptr ss : [esp+0x10], ebx
        jle public_5351b6
        mov al, byte ptr ss : [esp+0x48]
        xor ebp, ebp
        cmp al, bl
        je public_53519f
        mov dl, byte ptr ss : [esp+0x40]
        mov byte ptr ss : [esp+0x20], dl
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0x40]
        mov esi, dword ptr ds : [edi+4]
        mov dx, word ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], eax
        cmp esi, dword ptr ds : [edi+8]
        mov word ptr ss : [esp+0x1C], dx
        je public_53517b
        public_535151 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x40]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x4C], eax
        call public_537260
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        cmp esi, eax
        jne public_535151
        public_53517b : nop
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ds : [public_673344]
        push edx
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_5b7e1d
        add esp, 4
        public_53519f : nop
        mov eax, ebp
        public_5351a1 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 0xC
        public_5351b6 : nop
        mov eax, 0xFFFFFFFC
        jmp public_5351a1
        public_5351bd : nop
        mov eax, 0xFFFFFFFE
        jmp public_5351a1
        UNREACHABLE_TRAP(0x535010)
    }
}

#undef public_53504b
#undef public_535050
#undef public_535064
#undef public_53508e
#undef public_535090
#undef public_5350c4
#undef public_5350e3
#undef public_5350e5
#undef public_5350f6
#undef public_535151
#undef public_53517b
#undef public_53519f
#undef public_5351a1
#undef public_5351b6
#undef public_5351bd
