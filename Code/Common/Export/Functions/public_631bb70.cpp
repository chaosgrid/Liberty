#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631bb70);

#define public_631bb9d _public_631bb9d
#define public_631bbac _public_631bbac
#define public_631bbc0 _public_631bbc0
#define public_631bbe5 _public_631bbe5
#define public_631bc00 _public_631bc00
#define public_631bc10 _public_631bc10
#define public_631bc16 _public_631bc16
#define public_631bc30 _public_631bc30
#define public_631bc45 _public_631bc45
#define public_631bc62 _public_631bc62
#define public_631bc75 _public_631bc75
#define public_631bc85 _public_631bc85
#define public_631bcb2 _public_631bcb2
#define public_631bcc2 _public_631bcc2
#define public_631bcdd _public_631bcdd
#define public_631bce1 _public_631bce1
#define public_631bd00 _public_631bd00
#define public_631bd10 _public_631bd10
#define public_631bd2c _public_631bd2c
#define public_631bd40 _public_631bd40
#define public_631bd5f _public_631bd5f
#define public_631bd63 _public_631bd63
#define public_631bd6a _public_631bd6a
#define public_631bd79 _public_631bd79
#define public_631bd7d _public_631bd7d
#define public_631bd90 _public_631bd90
#define public_631bd9e _public_631bd9e
#define public_631bdcb _public_631bdcb
#define public_631bdd7 _public_631bdd7
#define public_631bde6 _public_631bde6
#define public_631be17 _public_631be17
#define public_631be19 _public_631be19
#define public_631be23 _public_631be23

PROC_DECLARE(0x631bb70, internal_631bb70, public_631bb70);
extern "C" NAKED register_t __cdecl internal_631bb70()
{
    __asm
    {
        sub esp, 0x10
        fld qword ptr ds : [public_639c430]
        push ebx
        push ebp
        fst qword ptr ss : [esp+0xC]
        mov ebp, dword ptr ss : [esp+0x1C]
        cmp byte ptr ss : [ebp], 0x2B
        push esi
        push edi
        mov edi, 0xA
        mov dword ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [esp+0x10], edi
        jne public_631bb9d
        inc ebp
        public_631bb9d : nop
        cmp byte ptr ss : [ebp], 0x2D
        jne public_631bbac
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        inc ebp
        public_631bbac : nop
        cmp byte ptr ss : [ebp], 0x30
        mov ebx, 0x10
        jne public_631bbe5
        fstp st(0)
        lea esp, ss:[esp]
        public_631bbc0 : nop
        mov al, byte ptr ss : [ebp+1]
        inc ebp
        cmp al, 0x30
        je public_631bbc0
        movsx eax, al
        push eax
        call dword ptr ds : [public_63992f4]
        add esp, 4
        cmp eax, 0x78
        fld qword ptr ss : [esp+0x14]
        jne public_631bbe5
        inc ebp
        mov dword ptr ss : [esp+0x10], ebx
        mov edi, ebx
        public_631bbe5 : nop
        cmp edi, ebx
        mov esi, ebp
        jne public_631bc45
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp]
        and ecx, 0x7F
        test byte ptr ds : [ecx+public_63ed4a8], bl
        je public_631bc10
        nop 
        lea esp, ss:[esp]
        public_631bc00 : nop
        inc esi
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        and edx, 0x7F
        test byte ptr ds : [edx+public_63ed4a8], bl
        jne public_631bc00
        public_631bc10 : nop
        cmp byte ptr ds : [esi], 0x2E
        jne public_631bc16
        inc esi
        public_631bc16 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        and eax, 0x7F
        test byte ptr ds : [eax+public_63ed4a8], bl
        je public_631bd7d
        lea esp, ss:[esp]
        public_631bc30 : nop
        inc esi
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        and ecx, 0x7F
        test byte ptr ds : [ecx+public_63ed4a8], bl
        jne public_631bc30
        jmp public_631bd7d
        public_631bc45 : nop
        mov al, byte ptr ss : [ebp]
        cmp al, 0x27
        jne public_631bc62
        movsx edx, byte ptr ss : [ebp+1]
        fstp st(0)
        pop edi
        mov dword ptr ss : [esp+0x20], edx
        pop esi
        pop ebp
        fild dword ptr ss : [esp+0x18]
        pop ebx
        add esp, 0x10
        ret 
        public_631bc62 : nop
        test al, al
        je public_631bd63
        and eax, 0x7F
        test byte ptr ds : [eax+public_63ed4a8], bl
        je public_631bc85
        public_631bc75 : nop
        inc esi
        xor eax, eax
        mov al, byte ptr ds : [esi]
        and eax, 0x7F
        test byte ptr ds : [eax+public_63ed4a8], bl
        jne public_631bc75
        public_631bc85 : nop
        mov edi, esi
        sub edi, ebp
        test edi, edi
        jle public_631bce1
        movsx ecx, byte ptr ds : [esi-1]
        fstp st(0)
        push ecx
        call dword ptr ds : [public_63992f4]
        add esp, 4
        cmp edi, 1
        jle public_631bcc2
        cmp eax, 0x64
        jne public_631bcb2
        dec esi
        mov dword ptr ss : [esp+0x10], 0xA
        jmp public_631bcdd
        public_631bcb2 : nop
        cmp eax, 0x62
        jne public_631bcdd
        dec esi
        mov dword ptr ss : [esp+0x10], 2
        jmp public_631bcdd
        public_631bcc2 : nop
        mov al, byte ptr ds : [esi]
        xor edx, edx
        cmp al, 0x68
        sete dl
        push edx
        call dword ptr ds : [public_63992f4]
        add esp, 4
        test eax, eax
        je public_631bcdd
        mov dword ptr ss : [esp+0x10], ebx
        public_631bcdd : nop
        fld qword ptr ss : [esp+0x14]
        public_631bce1 : nop
        mov al, byte ptr ds : [esi]
        test al, al
        je public_631bd5f
        cmp al, 0x2E
        mov bl, 8
        jne public_631bd10
        inc esi
        xor eax, eax
        mov al, byte ptr ds : [esi]
        and eax, 0x7F
        test byte ptr ds : [eax+public_63ed4a8], bl
        je public_631bd10
        lea ecx, ds:[ecx]
        public_631bd00 : nop
        inc esi
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        and ecx, 0x7F
        test byte ptr ds : [ecx+public_63ed4a8], bl
        jne public_631bd00
        public_631bd10 : nop
        cmp dword ptr ss : [esp+0x10], 0xA
        jne public_631bd79
        movsx edx, byte ptr ds : [esi]
        fstp st(0)
        push edx
        call dword ptr ds : [public_63992f4]
        add esp, 4
        cmp eax, 0x65
        jne public_631bd2c
        inc esi
        public_631bd2c : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        and eax, 0x7F
        test byte ptr ds : [eax+public_63ed4a8], bl
        je public_631bd6a
        nop 
        lea esp, ss:[esp]
        public_631bd40 : nop
        inc esi
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        and ecx, 0x7F
        test byte ptr ds : [ecx+public_63ed4a8], bl
        jne public_631bd40
        push ebp
        call dword ptr ds : [public_63992f0]
        add esp, 4
        jmp public_631be19
        public_631bd5f : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_631bd63 : nop
        cmp edi, 0xA
        jne public_631bd7d
        fstp st(0)
        public_631bd6a : nop
        push ebp
        call dword ptr ds : [public_63992f0]
        add esp, 4
        jmp public_631be19
        public_631bd79 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_631bd7d : nop
        cmp ebp, esi
        fld qword ptr ds : [public_639c430]
        mov ecx, ebp
        jae public_631be17
        lea ecx, ds:[ecx]
        public_631bd90 : nop
        mov al, byte ptr ds : [ecx]
        cmp al, 0x2E
        jne public_631bd9e
        fstp st(0)
        fild dword ptr ss : [esp+0x10]
        jmp public_631bdd7
        public_631bd9e : nop
        movsx edx, al
        movzx eax, byte ptr ds : [edx+public_63ed528]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], eax
        jge public_631bde6
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_631bdcb
        fild dword ptr ss : [esp+0x14]
        fdiv st, st(1)
        faddp st(2), st
        fimul dword ptr ss : [esp+0x10]
        jmp public_631bdd7
        public_631bdcb : nop
        fild dword ptr ss : [esp+0x10]
        fmulp st(2), st
        fild dword ptr ss : [esp+0x14]
        faddp st(2), st
        public_631bdd7 : nop
        inc ecx
        cmp ecx, esi
        jb public_631bd90
        fxch 
        fst qword ptr ss : [esp+0x14]
        fstp st(1)
        jmp public_631be19
        public_631bde6 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        fstp st(0)
        mov edx, dword ptr ds : [public_6399028]
        fstp qword ptr ss : [esp+0x14]
        push ecx
        push 0x14E
/*FIXUP push offset public_63a3a30 @0x631bdfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3a30
        mov eax, 0x100002
/*FIXUP push offset public_63a39e0 @0x631be06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a39e0
        push eax
        call dword ptr ds : [edx]
        fld qword ptr ss : [esp+0x28]
        add esp, 0x14
        jmp public_631be19
        public_631be17 : nop
        fstp st(0)
        public_631be19 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jge public_631be23
        fchs 
        public_631be23 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x631bb70)
    }
}

#undef public_631bb9d
#undef public_631bbac
#undef public_631bbc0
#undef public_631bbe5
#undef public_631bc00
#undef public_631bc10
#undef public_631bc16
#undef public_631bc30
#undef public_631bc45
#undef public_631bc62
#undef public_631bc75
#undef public_631bc85
#undef public_631bcb2
#undef public_631bcc2
#undef public_631bcdd
#undef public_631bce1
#undef public_631bd00
#undef public_631bd10
#undef public_631bd2c
#undef public_631bd40
#undef public_631bd5f
#undef public_631bd63
#undef public_631bd6a
#undef public_631bd79
#undef public_631bd7d
#undef public_631bd90
#undef public_631bd9e
#undef public_631bdcb
#undef public_631bdd7
#undef public_631bde6
#undef public_631be17
#undef public_631be19
#undef public_631be23
