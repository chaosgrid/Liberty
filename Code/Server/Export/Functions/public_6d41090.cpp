#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d41090);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e70);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62bcb);

#define public_6d4111c _public_6d4111c
#define public_6d4116b _public_6d4116b
#define public_6d4118d _public_6d4118d
#define public_6d411eb _public_6d411eb
#define public_6d41202 _public_6d41202
#define public_6d41226 _public_6d41226
#define public_6d41257 _public_6d41257
#define public_6d41270 _public_6d41270
#define public_6d41280 _public_6d41280
#define public_6d4129a _public_6d4129a
#define public_6d412ac _public_6d412ac
#define public_6d412b1 _public_6d412b1
#define public_6d412d3 _public_6d412d3
#define public_6d412f6 _public_6d412f6
#define public_6d412fe _public_6d412fe
#define public_6d41309 _public_6d41309
#define public_6d41311 _public_6d41311
#define public_6d41320 _public_6d41320
#define public_6d41328 _public_6d41328
#define public_6d41333 _public_6d41333
#define public_6d41345 _public_6d41345

PROC_DECLARE(0x6d41090, internal_6d41090, public_6d41090);
extern "C" NAKED register_t __cdecl internal_6d41090()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov dx, word ptr ss : [esp+4]
        push 0xFFFFFFFF
/*FIXUP push public_6d62bcb @0x6d4109d*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62bcb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        mov si, word ptr ss : [esp+0x50]
        cmp dx, si
        push edi
        mov edi, ecx
        jbe public_6d4116b
        mov al, byte ptr ss : [esp+0x58]
        push 0
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x18], al
        call dword ptr ds : [public_6d64b74]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6d695c0
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d4111c
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6d695c0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [eax+ebx], 0
        public_6d4111c : nop
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x5C], offset public_6d66ee4
        call dword ptr ds : [public_6d64c5c]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x4C], 1
        call dword ptr ds : [public_6d64ad0]
/*FIXUP push offset public_6d72fc0 @0x6d4114f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72fc0
        lea eax, ss:[esp+0x28]
        push eax
        mov byte ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x2C], offset public_6d68ab0
        call public_6d601a2
        public_6d4116b : nop
        cmp dx, 0xFF
        ja public_6d412b1
        cmp si, 0xFF
        mov dword ptr ss : [esp+0x10], 0xFF
        lea eax, ss:[esp+0x54]
        jb public_6d4118d
        lea eax, ss:[esp+0x10]
        public_6d4118d : nop
        mov cl, byte ptr ds : [eax]
        cmp dl, cl
        jbe public_6d411eb
        mov cl, byte ptr ss : [esp+0x58]
        mov byte ptr ss : [esp+0x14], cl
        push 0
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d64b74]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6d695c0
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_6d695c0 @0x6d411b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d695c0
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6d64b08]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x4C], 2
        call public_6d1b8f0
/*FIXUP push offset public_6d72fc0 @0x6d411dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72fc0
        lea eax, ss:[esp+0x28]
        push eax
        call public_6d601a2
        public_6d411eb : nop
        mov al, byte ptr ss : [esp+0x58]
        xor ebx, ebx
        test al, al
        je public_6d41270
        mov bl, dl
        movzx ebp, cl
        cmp ebx, ebp
        ja public_6d412b1
        public_6d41202 : nop
        movsx esi, bl
        push esi
        call dword ptr ds : [public_6d64c50]
        xor ecx, ecx
        mov cl, al
        mov edx, ecx
        shr edx, 5
        and ecx, 0x8000001F
        lea eax, ds:[edi+edx*4+8]
        jns public_6d41226
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d41226 : nop
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        push esi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        call dword ptr ds : [public_6d64ba8]
        xor ecx, ecx
        mov cl, al
        add esp, 8
        mov eax, ecx
        shr eax, 5
        and ecx, 0x8000001F
        lea eax, ds:[edi+eax*4+8]
        jns public_6d41257
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d41257 : nop
        mov esi, dword ptr ds : [eax]
        mov edx, 1
        shl edx, cl
        or esi, edx
        inc ebx
        cmp ebx, ebp
        mov dword ptr ds : [eax], esi
        jbe public_6d41202
        mov dx, word ptr ss : [esp+0x50]
        jmp public_6d412ac
        public_6d41270 : nop
        xor eax, eax
        mov al, dl
        mov bl, cl
        cmp eax, ebx
        ja public_6d412b1
        lea ebx, ds:[ebx]
        public_6d41280 : nop
        xor ecx, ecx
        mov cl, al
        mov esi, ecx
        shr esi, 5
        and ecx, 0x8000001F
        lea esi, ds:[edi+esi*4+8]
        jns public_6d4129a
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d4129a : nop
        mov ebp, 1
        shl ebp, cl
        mov ecx, dword ptr ds : [esi]
        or ecx, ebp
        inc eax
        cmp eax, ebx
        mov dword ptr ds : [esi], ecx
        jbe public_6d41280
        public_6d412ac : nop
        mov si, word ptr ss : [esp+0x54]
        public_6d412b1 : nop
        cmp si, 0xFF
        jbe public_6d41345
        cmp dx, 0x100
        mov dword ptr ss : [esp+0x58], 0x100
        lea eax, ss:[esp+0x50]
        ja public_6d412d3
        lea eax, ss:[esp+0x58]
        public_6d412d3 : nop
        mov ax, word ptr ds : [eax]
        mov word ptr ss : [esp+0x58], ax
        mov eax, dword ptr ds : [edi+0x30]
        add edi, 0x2C
        test eax, eax
        mov word ptr ss : [esp+0x5A], si
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x58], ecx
        jne public_6d412f6
        xor ecx, ecx
        jmp public_6d412fe
        public_6d412f6 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 2
        public_6d412fe : nop
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        jne public_6d41309
        xor eax, eax
        jmp public_6d41311
        public_6d41309 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, edx
        sar eax, 2
        public_6d41311 : nop
        cmp ecx, eax
        jne public_6d41333
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6d41320
        xor eax, eax
        jmp public_6d41328
        public_6d41320 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_6d41328 : nop
        add eax, 5
        push eax
        mov ecx, edi
        call public_6d41e70
        public_6d41333 : nop
        mov eax, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x58]
        push edx
        push 1
        push eax
        mov ecx, edi
        call public_6cecbd0
        public_6d41345 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 0xC
        UNREACHABLE_TRAP(0x6d41090)
    }
}

#undef public_6d4111c
#undef public_6d4116b
#undef public_6d4118d
#undef public_6d411eb
#undef public_6d41202
#undef public_6d41226
#undef public_6d41257
#undef public_6d41270
#undef public_6d41280
#undef public_6d4129a
#undef public_6d412ac
#undef public_6d412b1
#undef public_6d412d3
#undef public_6d412f6
#undef public_6d412fe
#undef public_6d41309
#undef public_6d41311
#undef public_6d41320
#undef public_6d41328
#undef public_6d41333
#undef public_6d41345
