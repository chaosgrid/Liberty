#include "Common-PCH.h"


#define public_631b994 _public_631b994
#define public_631b9a0 _public_631b9a0
#define public_631b9de _public_631b9de
#define public_631b9e7 _public_631b9e7
#define public_631ba00 _public_631ba00
#define public_631ba08 _public_631ba08
#define public_631ba10 _public_631ba10
#define public_631ba18 _public_631ba18
#define public_631ba20 _public_631ba20
#define public_631ba40 _public_631ba40
#define public_631ba48 _public_631ba48
#define public_631ba50 _public_631ba50
#define public_631ba58 _public_631ba58
#define public_631ba60 _public_631ba60
#define public_631ba77 _public_631ba77
#define public_631ba7f _public_631ba7f
#define public_631ba87 _public_631ba87
#define public_631ba8f _public_631ba8f
#define public_631ba97 _public_631ba97
#define public_631baf0 _public_631baf0

PROC_DECLARE(0x631b980, internal_631b980, public_631b980);
extern "C" NAKED register_t __cdecl internal_631b980()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [edx]
        sub esp, 0xDC
        test al, al
        push esi
        push edi
        mov esi, edx
        je public_631b9a0
        public_631b994 : nop
        cmp al, 0x7B
        je public_631b9a0
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_631b994
        public_631b9a0 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_63a39b8
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_63a39b8 @0x631b9b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a39b8
        push edx
        call dword ptr ds : [public_639925c]
        add esp, 0xC
        test eax, eax
        jne public_631b9de
        mov ecx, dword ptr ss : [esp+0xEC]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        pop edi
        mov dword ptr ds : [ecx+0xC], eax
        pop esi
        add esp, 0xDC
        ret 
        public_631b9de : nop
        inc esi
        lea edx, ss:[esp+0x1C]
        mov eax, esi
        sub edx, esi
        public_631b9e7 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_631b9e7
        mov al, byte ptr ds : [esi]
        test al, al
        mov ecx, esi
        je public_631ba20
        lea esp, ss:[esp]
        public_631ba00 : nop
        cmp al, 0x30
        jl public_631ba08
        cmp al, 0x39
        jle public_631ba18
        public_631ba08 : nop
        cmp al, 0x61
        jl public_631ba10
        cmp al, 0x66
        jle public_631ba18
        public_631ba10 : nop
        cmp al, 0x41
        jl public_631ba20
        cmp al, 0x46
        jg public_631ba20
        public_631ba18 : nop
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_631ba00
        public_631ba20 : nop
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6399258]
        push 0x10
        push 0
        push ecx
        inc esi
        call ebp
        mov dword ptr ss : [esp+0x2C], eax
        mov al, byte ptr ds : [esi]
        add esp, 0xC
        test al, al
        mov ecx, esi
        je public_631ba60
        nop 
        public_631ba40 : nop
        cmp al, 0x30
        jl public_631ba48
        cmp al, 0x39
        jle public_631ba58
        public_631ba48 : nop
        cmp al, 0x61
        jl public_631ba50
        cmp al, 0x66
        jle public_631ba58
        public_631ba50 : nop
        cmp al, 0x41
        jl public_631ba60
        cmp al, 0x46
        jg public_631ba60
        public_631ba58 : nop
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_631ba40
        public_631ba60 : nop
        push 0x10
        push 0
        push ecx
        inc esi
        call ebp
        mov dword ptr ss : [esp+0x28], eax
        mov al, byte ptr ds : [esi]
        add esp, 0xC
        test al, al
        mov ecx, esi
        je public_631ba97
        public_631ba77 : nop
        cmp al, 0x30
        jl public_631ba7f
        cmp al, 0x39
        jle public_631ba8f
        public_631ba7f : nop
        cmp al, 0x61
        jl public_631ba87
        cmp al, 0x66
        jle public_631ba8f
        public_631ba87 : nop
        cmp al, 0x41
        jl public_631ba97
        cmp al, 0x46
        jg public_631ba97
        public_631ba8f : nop
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_631ba77
        public_631ba97 : nop
        push 0x10
        push 0
        push ecx
        inc esi
        call ebp
        mov dl, byte ptr ds : [esi]
        push 0x10
        inc esi
        mov ebx, eax
        mov al, byte ptr ds : [esi]
        lea ecx, ss:[esp+0x20]
        push 0
        push ecx
        mov byte ptr ss : [esp+0x28], dl
        mov byte ptr ss : [esp+0x29], al
        inc esi
        mov byte ptr ss : [esp+0x2A], 0
        call ebp
        mov dl, byte ptr ds : [esi]
        push 0x10
        mov byte ptr ss : [esp+0x30], al
        mov al, byte ptr ds : [esi+1]
        inc esi
        lea ecx, ss:[esp+0x2C]
        push 0
        push ecx
        mov byte ptr ss : [esp+0x34], dl
        mov byte ptr ss : [esp+0x35], al
        mov byte ptr ss : [esp+0x36], 0
        call ebp
        add esp, 0x24
        add esi, 2
        mov byte ptr ss : [esp+0x15], al
        xor edi, edi
        lea ecx, ds:[ecx]
        public_631baf0 : nop
        mov dl, byte ptr ds : [esi]
        mov al, byte ptr ds : [esi+1]
        push 0x10
        inc esi
        lea ecx, ss:[esp+0x14]
        push 0
        push ecx
        mov byte ptr ss : [esp+0x1C], dl
        mov byte ptr ss : [esp+0x1D], al
        inc esi
        mov byte ptr ss : [esp+0x1E], 0
        call ebp
        add esp, 0xC
        mov byte ptr ss : [esp+edi+0x16], al
        inc edi
        cmp edi, 6
        jl public_631baf0
        mov eax, dword ptr ss : [esp+0xF4]
        mov edx, dword ptr ss : [esp+0x20]
        mov cx, word ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov word ptr ds : [eax+4], cx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], ecx
        xor edx, edx
        mov word ptr ds : [eax+6], bx
        mov esi, eax
        mov ecx, 4
        mov edi, offset public_6401750
        repe cmpsd
        sete dl
        pop ebp
        pop ebx
        pop edi
        pop esi
        dec edx
        and eax, edx
        add esp, 0xDC
        ret 
        UNREACHABLE_TRAP(0x631b980)
    }
}

#undef public_631b994
#undef public_631b9a0
#undef public_631b9de
#undef public_631b9e7
#undef public_631ba00
#undef public_631ba08
#undef public_631ba10
#undef public_631ba18
#undef public_631ba20
#undef public_631ba40
#undef public_631ba48
#undef public_631ba50
#undef public_631ba58
#undef public_631ba60
#undef public_631ba77
#undef public_631ba7f
#undef public_631ba87
#undef public_631ba8f
#undef public_631ba97
#undef public_631baf0
