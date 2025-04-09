#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57c9b0);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_PROC_SYMBOL(public_57d6a0);

#define public_57ca0d _public_57ca0d
#define public_57ca4c _public_57ca4c
#define public_57ca91 _public_57ca91
#define public_57cad8 _public_57cad8
#define public_57cb28 _public_57cb28
#define public_57cb73 _public_57cb73
#define public_57cb95 _public_57cb95
#define public_57cbb7 _public_57cbb7
#define public_57cbe4 _public_57cbe4
#define public_57cbf0 _public_57cbf0
#define public_57cc01 _public_57cc01
#define public_57cc20 _public_57cc20
#define public_57cc3f _public_57cc3f
#define public_57cc5e _public_57cc5e
#define public_57cc6c _public_57cc6c
#define public_57cc78 _public_57cc78
#define public_57cc90 _public_57cc90
#define public_57ccb3 _public_57ccb3
#define public_57ccd8 _public_57ccd8
#define public_57ccf2 _public_57ccf2
#define public_57ccfe _public_57ccfe
#define public_57cd17 _public_57cd17
#define public_57cd34 _public_57cd34
#define public_57cd53 _public_57cd53
#define public_57cd75 _public_57cd75
#define public_57cd85 _public_57cd85
#define public_57cd99 _public_57cd99
#define public_57cda5 _public_57cda5
#define public_57cdb5 _public_57cdb5
#define public_57cdc9 _public_57cdc9
#define public_57cdd5 _public_57cdd5
#define public_57cdda _public_57cdda
#define public_57cdef _public_57cdef

PROC_DECLARE(0x57c9b0, internal_57c9b0, public_57c9b0);
extern "C" NAKED register_t __cdecl internal_57c9b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x6C]
        mov bl, 1
        test bl, al
        push edi
        je public_57cc6c
        mov edi, dword ptr ss : [esp+0x1C]
        mov al, byte ptr ds : [edi+0x18]
        test al, al
        mov byte ptr ss : [esp+0x13], 0
        je public_57cdef
        mov eax, dword ptr ds : [esi+0x4A0]
        cmp eax, dword ptr ds : [esi+0x4A4]
        jne public_57cdda
        mov edx, dword ptr ds : [edi+4]
        lea eax, ds:[edx-8]
        cmp eax, 0x65
        mov byte ptr ss : [esp+0x13], bl
        ja public_57cdd5
/*FIXUP movzx ecx, byte ptr ds : [eax+public_57ce40] @0x57c9ff*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_57ce00] @0x57ca06*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_57cbb7
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_57cc5e
  JMPTB cmp eax, 2
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 3
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 4
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 5
  JMPTB mov ecx, 2
  JMPTB je public_57cda5
  JMPTB cmp eax, 6
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 7
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 8
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 9
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 3
  JMPTB je public_57cd75
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 4
  JMPTB je public_57cc90
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 5
  JMPTB je public_57cc78
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 6
  JMPTB je public_57cb73
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 7
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 8
  JMPTB je public_57cb95
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 7
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 1
  JMPTB je public_57cc5e
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 9
  JMPTB je public_57ccd8
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 0xA
  JMPTB je public_57ca0d
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 0xB
  JMPTB je public_57ca4c
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 0xC
  JMPTB je public_57ca91
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x53
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x54
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x55
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x56
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x57
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x58
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x59
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x5A
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x5B
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x5C
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x5D
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x5E
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x5F
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x60
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x61
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x62
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x63
  JMPTB mov ecx, 0xD
  JMPTB je public_57cad8
  JMPTB cmp eax, 0x64
  JMPTB mov ecx, 0xF
  JMPTB je public_57cdd5
  JMPTB cmp eax, 0x65
  JMPTB mov ecx, 0xE
  JMPTB je public_57cb28
  JMPTB int 3
        public_57ca0d : nop
        mov al, byte ptr ds : [esi+0x4F8]
        test al, al
        jne public_57cdd5
        test byte ptr ds : [esi+0x4F4], bl
        je public_57cdd5
        test byte ptr ds : [edi+8], 0xC
        je public_57cdd5
        mov al, byte ptr ds : [esi+0x4D4]
        mov dl, al
        not dl
        xor dl, al
        and dl, bl
        xor dl, al
        mov byte ptr ds : [esi+0x4D4], dl
        jmp public_57cdda
        public_57ca4c : nop
        mov al, byte ptr ds : [esi+0x4F8]
        test al, al
        jne public_57cdd5
        test byte ptr ds : [esi+0x4F4], 2
        je public_57cdd5
        test byte ptr ds : [edi+8], 0xC
        je public_57cdd5
        mov al, byte ptr ds : [esi+0x4D4]
        mov cl, al
        shr cl, 1
        not cl
        shl cl, 1
        xor cl, al
        and cl, 2
        xor cl, al
        mov byte ptr ds : [esi+0x4D4], cl
        jmp public_57cdda
        public_57ca91 : nop
        mov al, byte ptr ds : [esi+0x4F8]
        test al, al
        jne public_57cdd5
        test byte ptr ds : [esi+0x4F4], 4
        je public_57cdd5
        test byte ptr ds : [edi+8], 0xC
        je public_57cdd5
        mov al, byte ptr ds : [esi+0x4D4]
        mov dl, al
        shr dl, 2
        not dl
        shl dl, 2
        xor dl, al
        and dl, 4
        xor dl, al
        mov byte ptr ds : [esi+0x4D4], dl
        jmp public_57cdda
        public_57cad8 : nop
        mov al, byte ptr ds : [esi+0x4F8]
        test al, al
        jne public_57cdd5
        test byte ptr ds : [esi+0x4F4], 0xF8
        je public_57cdd5
        test byte ptr ds : [edi+8], 0xC
        je public_57cdd5
        mov al, byte ptr ds : [esi+0x4D4]
        mov cl, al
        and cl, 0xF8
        cmp cl, 0xF8
        jae public_57cdda
        mov dl, al
        and dl, 0xF8
        add dl, 8
        and al, 7
        xor dl, al
        mov byte ptr ds : [esi+0x4D4], dl
        jmp public_57cdda
        public_57cb28 : nop
        mov al, byte ptr ds : [esi+0x4F8]
        test al, al
        jne public_57cdd5
        test byte ptr ds : [esi+0x4F4], 0xF8
        je public_57cdd5
        test byte ptr ds : [edi+8], 0xC
        je public_57cdd5
        mov al, byte ptr ds : [esi+0x4D4]
        test al, 0xF8
        jbe public_57cdda
        mov cl, al
        and cl, 0xF8
        not al
        dec cl
        and al, 7
        xor cl, al
        mov byte ptr ds : [esi+0x4D4], cl
        jmp public_57cdda
        public_57cb73 : nop
        mov eax, dword ptr ds : [esi+0x52C]
        test eax, eax
        jne public_57cc6c
        mov edx, dword ptr ds : [esi+0x49C]
        dec edx
        push edx
        mov ecx, esi
        call public_57d6a0
        jmp public_57cdda
        public_57cb95 : nop
        mov eax, dword ptr ds : [esi+0x52C]
        test eax, eax
        jne public_57cc6c
        mov eax, dword ptr ds : [esi+0x49C]
        inc eax
        push eax
        mov ecx, esi
        call public_57d6a0
        jmp public_57cdda
        public_57cbb7 : nop
        mov eax, dword ptr ds : [esi+0x49C]
        test eax, eax
        jle public_57cdda
        dec eax
        push eax
        mov ecx, esi
        call public_57d6a0
        mov eax, dword ptr ds : [esi+0x4C8]
        mov edx, dword ptr ds : [esi+0x4CC]
        cmp eax, edx
        mov ecx, dword ptr ds : [esi+0x49C]
        je public_57cbf0
        public_57cbe4 : nop
        test ecx, ecx
        jle public_57cbf0
        add eax, 0xC
        dec ecx
        cmp eax, edx
        jne public_57cbe4
        public_57cbf0 : nop
        mov ecx, dword ptr ds : [esi+0x4CC]
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], ecx
        je public_57cc3f
        public_57cc01 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[eax-0xC]
        mov dword ptr ds : [edx], ecx
        mov cx, word ptr ds : [eax]
        mov edi, eax
        lea ebx, ds:[eax-0xA]
        mov ebp, 0xA
        mov word ptr ds : [edx], cx
        sub edi, edx
        mov ecx, ebx
        sub ebp, eax
        mov edi, edi
        public_57cc20 : nop
        mov dl, byte ptr ds : [edi+ecx]
        mov byte ptr ds : [ecx], dl
        inc ecx
        lea edx, ds:[ecx+ebp]
        cmp edx, 2
        jb public_57cc20
        mov ecx, dword ptr ds : [ebx+0xE]
        mov dword ptr ds : [ebx+2], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0xC
        cmp eax, ecx
        jne public_57cc01
        public_57cc3f : nop
        mov eax, dword ptr ds : [esi+0x4CC]
        add eax, 0xFFFFFFF4
        mov ecx, esi
        mov dword ptr ds : [esi+0x4CC], eax
        call public_57d330
        mov edi, dword ptr ss : [esp+0x1C]
        jmp public_57cdda
        public_57cc5e : nop
        mov eax, dword ptr ds : [esi+0x52C]
        test eax, eax
        je public_57cdd5
        public_57cc6c : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_57cc78 : nop
        mov eax, dword ptr ds : [esi+0x52C]
        test eax, eax
        jne public_57cc6c
        push 0
        mov ecx, esi
        call public_57d6a0
        jmp public_57cdda
        public_57cc90 : nop
        mov eax, dword ptr ds : [esi+0x52C]
        test eax, eax
        jne public_57cc6c
        mov eax, dword ptr ds : [esi+0x4C8]
        test eax, eax
        jne public_57ccb3
        xor edx, edx
        push edx
        mov ecx, esi
        call public_57d6a0
        jmp public_57cdda
        public_57ccb3 : nop
        mov ecx, dword ptr ds : [esi+0x4CC]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push edx
        mov ecx, esi
        call public_57d6a0
        jmp public_57cdda
        public_57ccd8 : nop
        mov eax, dword ptr ds : [esi+0x4C8]
        mov ecx, dword ptr ds : [esi+0x4CC]
        cmp eax, ecx
        mov edx, dword ptr ds : [esi+0x49C]
        je public_57cdda
        public_57ccf2 : nop
        test edx, edx
        jle public_57ccfe
        add eax, 0xC
        dec edx
        cmp eax, ecx
        jne public_57ccf2
        public_57ccfe : nop
        cmp eax, ecx
        je public_57cdda
        mov ecx, dword ptr ds : [esi+0x4CC]
        add eax, 0xC
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], ecx
        je public_57cd53
        public_57cd17 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[eax-0xC]
        mov dword ptr ds : [edx], ecx
        mov cx, word ptr ds : [eax]
        mov edi, eax
        lea ebx, ds:[eax-0xA]
        mov ebp, 0xA
        mov word ptr ds : [edx], cx
        sub edi, edx
        mov ecx, ebx
        sub ebp, eax
        public_57cd34 : nop
        mov dl, byte ptr ds : [edi+ecx]
        mov byte ptr ds : [ecx], dl
        inc ecx
        lea edx, ds:[ecx+ebp]
        cmp edx, 2
        jb public_57cd34
        mov ecx, dword ptr ds : [ebx+0xE]
        mov dword ptr ds : [ebx+2], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0xC
        cmp eax, ecx
        jne public_57cd17
        public_57cd53 : nop
        add dword ptr ds : [esi+0x4CC], 0xFFFFFFF4
        mov edx, dword ptr ds : [esi+0x49C]
        push edx
        mov ecx, esi
        call public_57d6a0
        mov ecx, esi
        call public_57d330
        mov edi, dword ptr ss : [esp+0x1C]
        jmp public_57cdda
        public_57cd75 : nop
        mov ecx, dword ptr ds : [esi+0x52C]
        test ecx, ecx
        je public_57cd85
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x10]
        public_57cd85 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_57cd99
        mov edx, dword ptr ds : [ecx]
        push 0
        push esi
        push 0xF003
        call dword ptr ds : [edx+0x5C]
        public_57cd99 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 8
        ret 4
        public_57cda5 : nop
        mov ecx, dword ptr ds : [esi+0x52C]
        test ecx, ecx
        je public_57cdb5
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x10]
        public_57cdb5 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_57cdc9
        mov edx, dword ptr ds : [ecx]
        push 0
        push esi
        push 0xF004
        call dword ptr ds : [edx+0x5C]
        public_57cdc9 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 8
        ret 4
        public_57cdd5 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_57cdda : nop
        mov esi, dword ptr ds : [esi+0x52C]
        test esi, esi
        je public_57cdef
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        public_57cdef : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x57c9b0)
        ASM_EXPORT_ENTRY_SINGLE(0x57cdd5, public_57cdd5)
    }
}

#undef public_57ca0d
#undef public_57ca4c
#undef public_57ca91
#undef public_57cad8
#undef public_57cb28
#undef public_57cb73
#undef public_57cb95
#undef public_57cbb7
#undef public_57cbe4
#undef public_57cbf0
#undef public_57cc01
#undef public_57cc20
#undef public_57cc3f
#undef public_57cc5e
#undef public_57cc6c
#undef public_57cc78
#undef public_57cc90
#undef public_57ccb3
#undef public_57ccd8
#undef public_57ccf2
#undef public_57ccfe
#undef public_57cd17
#undef public_57cd34
#undef public_57cd53
#undef public_57cd75
#undef public_57cd85
#undef public_57cd99
#undef public_57cda5
#undef public_57cdb5
#undef public_57cdc9
#undef public_57cdd5
#undef public_57cdda
#undef public_57cdef

#pragma init_seg(compiler)
extern "C" void const* const public_57cdd5 = __AsmFindLabelExport(&internal_57c9b0, 0x57cdd5);
