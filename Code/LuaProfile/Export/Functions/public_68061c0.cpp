#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68061c0);
CLANG_FORWARD_PROC_SYMBOL(public_68063e0);

#define public_68061eb _public_68061eb
#define public_6806203 _public_6806203
#define public_6806216 _public_6806216
#define public_680623b _public_680623b
#define public_6806241 _public_6806241
#define public_6806259 _public_6806259
#define public_680626c _public_680626c
#define public_6806292 _public_6806292
#define public_6806296 _public_6806296
#define public_68062ca _public_68062ca
#define public_68062cf _public_68062cf
#define public_68062e8 _public_68062e8
#define public_68062fa _public_68062fa
#define public_680630b _public_680630b
#define public_6806331 _public_6806331
#define public_6806345 _public_6806345
#define public_680635c _public_680635c
#define public_6806375 _public_6806375
#define public_6806387 _public_6806387
#define public_680638e _public_680638e
#define public_68063a0 _public_68063a0
#define public_68063b8 _public_68063b8
#define public_68063d0 _public_68063d0

PROC_DECLARE(0x68061c0, internal_68061c0, public_68061c0);
extern "C" NAKED register_t __cdecl internal_68061c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ds : [public_680c05c]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        xor edi, edi
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x10], edi
        public_68061eb : nop
        mov eax, dword ptr ds : [public_680c058]
        cmp dword ptr ds : [eax], 1
        jle public_6806203
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push 4
        push ecx
        call ebx
        add esp, 8
        jmp public_6806216
        public_6806203 : nop
        mov eax, dword ptr ds : [public_680c054]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 4
        public_6806216 : nop
        test eax, eax
        je public_680623b
        movsx edx, byte ptr ds : [esi]
        sub edx, 0x30
        mov dword ptr ss : [esp+0x14], edx
        inc esi
        fild dword ptr ss : [esp+0x14]
        fld qword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_680c190]
        faddp 
        fstp qword ptr ss : [esp+0x18]
        jmp public_68061eb
        public_680623b : nop
        cmp byte ptr ds : [esi], 0x2E
        jne public_6806296
        inc esi
        public_6806241 : nop
        mov eax, dword ptr ds : [public_680c058]
        cmp dword ptr ds : [eax], 1
        jle public_6806259
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push 4
        push ecx
        call ebx
        add esp, 8
        jmp public_680626c
        public_6806259 : nop
        mov eax, dword ptr ds : [public_680c054]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        xor eax, eax
        mov al, byte ptr ds : [ecx+edx*2]
        and eax, 4
        public_680626c : nop
        test eax, eax
        je public_6806292
        movsx edx, byte ptr ds : [esi]
        sub edx, 0x30
        mov dword ptr ss : [esp+0x14], edx
        inc esi
        inc edi
        fild dword ptr ss : [esp+0x14]
        fld qword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_680c190]
        faddp 
        fstp qword ptr ss : [esp+0x18]
        jmp public_6806241
        public_6806292 : nop
        mov dword ptr ss : [esp+0x10], edi
        public_6806296 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        push eax
        call dword ptr ds : [public_680c074]
        add esp, 4
        cmp eax, 0x45
        jne public_680635c
        mov al, byte ptr ds : [esi+1]
        xor edi, edi
        inc esi
        cmp al, 0x2D
        mov dword ptr ss : [esp+0x14], 1
        jne public_68062ca
        inc esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        jmp public_68062cf
        public_68062ca : nop
        cmp al, 0x2B
        jne public_68062cf
        inc esi
        public_68062cf : nop
        mov ecx, dword ptr ds : [public_680c058]
        cmp dword ptr ds : [ecx], 1
        jle public_68062e8
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        push 4
        push edx
        call ebx
        add esp, 8
        jmp public_68062fa
        public_68062e8 : nop
        mov ecx, dword ptr ds : [public_680c054]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [esi]
        mov al, byte ptr ds : [edx+eax*2]
        and eax, 4
        public_68062fa : nop
        test eax, eax
        jne public_680630b
        fld qword ptr ds : [public_680c188]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_680630b : nop
        movsx ecx, byte ptr ds : [esi]
        mov edx, dword ptr ds : [public_680c058]
        lea eax, ds:[edi+edi*4]
        lea edi, ds:[ecx+eax*2-0x30]
        mov eax, dword ptr ds : [edx]
        inc esi
        cmp eax, 1
        jle public_6806331
        xor eax, eax
        mov al, byte ptr ds : [esi]
        push 4
        push eax
        call ebx
        add esp, 8
        jmp public_6806345
        public_6806331 : nop
        mov edx, dword ptr ds : [public_680c054]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        xor eax, eax
        mov eax, dword ptr ds : [edx]
        mov al, byte ptr ds : [eax+ecx*2]
        and eax, 4
        public_6806345 : nop
        test eax, eax
        jne public_680630b
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        imul eax, edi
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov edi, ecx
        public_680635c : nop
        mov ecx, dword ptr ds : [public_680c058]
        cmp dword ptr ds : [ecx], 1
        jle public_6806375
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        push 8
        push edx
        call ebx
        add esp, 8
        jmp public_6806387
        public_6806375 : nop
        mov ecx, dword ptr ds : [public_680c054]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [esi]
        mov al, byte ptr ds : [edx+eax*2]
        and eax, 8
        public_6806387 : nop
        test eax, eax
        je public_680638e
        inc esi
        jmp public_680635c
        public_680638e : nop
        cmp byte ptr ds : [esi], 0
        je public_68063a0
        fld qword ptr ds : [public_680c188]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_68063a0 : nop
        test edi, edi
        jle public_68063b8
        push edi
        call public_68063e0
        fdivr qword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_68063b8 : nop
        jge public_68063d0
        neg edi
        push edi
        call public_68063e0
        fmul qword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_68063d0 : nop
        fld qword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x68061c0)
    }
}

#undef public_68061eb
#undef public_6806203
#undef public_6806216
#undef public_680623b
#undef public_6806241
#undef public_6806259
#undef public_680626c
#undef public_6806292
#undef public_6806296
#undef public_68062ca
#undef public_68062cf
#undef public_68062e8
#undef public_68062fa
#undef public_680630b
#undef public_6806331
#undef public_6806345
#undef public_680635c
#undef public_6806375
#undef public_6806387
#undef public_680638e
#undef public_68063a0
#undef public_68063b8
#undef public_68063d0
