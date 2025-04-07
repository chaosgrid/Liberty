#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3930);
CLANG_FORWARD_PROC_SYMBOL(public_65d3d00);
CLANG_FORWARD_PROC_SYMBOL(public_65d3f30);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d3f54 _public_65d3f54
#define public_65d3f72 _public_65d3f72
#define public_65d3f7d _public_65d3f7d
#define public_65d3f86 _public_65d3f86
#define public_65d3f91 _public_65d3f91
#define public_65d3faf _public_65d3faf
#define public_65d3fc6 _public_65d3fc6
#define public_65d3fd3 _public_65d3fd3
#define public_65d3fde _public_65d3fde
#define public_65d3fe1 _public_65d3fe1
#define public_65d3ff9 _public_65d3ff9
#define public_65d4004 _public_65d4004
#define public_65d4007 _public_65d4007
#define public_65d401e _public_65d401e
#define public_65d4029 _public_65d4029
#define public_65d4034 _public_65d4034
#define public_65d4037 _public_65d4037
#define public_65d404d _public_65d404d
#define public_65d4059 _public_65d4059
#define public_65d4065 _public_65d4065
#define public_65d4068 _public_65d4068
#define public_65d4083 _public_65d4083
#define public_65d40c2 _public_65d40c2
#define public_65d40d5 _public_65d40d5
#define public_65d40e0 _public_65d40e0
#define public_65d40e3 _public_65d40e3
#define public_65d40ee _public_65d40ee
#define public_65d4101 _public_65d4101
#define public_65d4128 _public_65d4128
#define public_65d4142 _public_65d4142
#define public_65d4168 _public_65d4168
#define public_65d417b _public_65d417b
#define public_65d4188 _public_65d4188
#define public_65d418a _public_65d418a
#define public_65d4195 _public_65d4195
#define public_65d41ac _public_65d41ac
#define public_65d41c4 _public_65d41c4
#define public_65d41d1 _public_65d41d1
#define public_65d41d3 _public_65d41d3
#define public_65d41df _public_65d41df
#define public_65d4209 _public_65d4209
#define public_65d4221 _public_65d4221
#define public_65d4231 _public_65d4231
#define public_65d423b _public_65d423b
#define public_65d425e _public_65d425e
#define public_65d4271 _public_65d4271
#define public_65d427c _public_65d427c
#define public_65d427f _public_65d427f
#define public_65d4289 _public_65d4289
#define public_65d42b2 _public_65d42b2
#define public_65d42c5 _public_65d42c5
#define public_65d42d2 _public_65d42d2
#define public_65d42d4 _public_65d42d4
#define public_65d42d7 _public_65d42d7
#define public_65d42da _public_65d42da
#define public_65d42e1 _public_65d42e1

PROC_DECLARE(0x65d3f30, internal_65d3f30, public_65d3f30);
extern "C" NAKED register_t __cdecl internal_65d3f30()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_65d3d00
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_65d3f72
        mov eax, dword ptr ds : [esi+8]
        public_65d3f54 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_65d3ff9
        mov dword ptr ds : [ecx+4], eax
        jmp public_65d4007
        public_65d3f72 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_65d3f7d
        mov eax, edx
        jmp public_65d3f54
        public_65d3f7d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_65d3f91
        public_65d3f86 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_65d3f86
        public_65d3f91 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_65d3f54
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_65d3faf
        mov dword ptr ds : [eax+4], ecx
        jmp public_65d3fc6
        public_65d3faf : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_65d3fc6 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_65d3fd3
        mov dword ptr ds : [edx+4], ecx
        jmp public_65d3fe1
        public_65d3fd3 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_65d3fde
        mov dword ptr ds : [edx], ecx
        jmp public_65d3fe1
        public_65d3fde : nop
        mov dword ptr ds : [edx+8], ecx
        public_65d3fe1 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x2C]
        mov dl, byte ptr ds : [ecx+0x2C]
        mov byte ptr ds : [ecx+0x2C], bl
        mov byte ptr ds : [esi+0x2C], dl
        jmp public_65d4068
        public_65d3ff9 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_65d4004
        mov dword ptr ds : [ecx], eax
        jmp public_65d4007
        public_65d4004 : nop
        mov dword ptr ds : [ecx+8], eax
        public_65d4007 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_65d4037
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_65d401e
        mov edx, dword ptr ds : [esi+4]
        jmp public_65d4034
        public_65d401e : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        jne public_65d4034
        public_65d4029 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_65d4029
        public_65d4034 : nop
        mov dword ptr ss : [ebp], edx
        public_65d4037 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_65d4068
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_65d404d
        mov edx, dword ptr ds : [esi+4]
        jmp public_65d4065
        public_65d404d : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        jne public_65d4065
        public_65d4059 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_65d4059
        public_65d4065 : nop
        mov dword ptr ss : [ebp+8], edx
        public_65d4068 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov bl, 1
        cmp byte ptr ds : [esi+0x2C], bl
        jne public_65d42e1
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_65d42da
        public_65d4083 : nop
        cmp byte ptr ds : [eax+0x2C], bl
        jne public_65d42da
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_65d4142
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_65d40ee
        mov byte ptr ds : [ecx+0x2C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_65d40c2
        mov dword ptr ds : [esi+4], ecx
        public_65d40c2 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65d40d5
        mov dword ptr ds : [esi+4], edx
        jmp public_65d40e3
        public_65d40d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_65d40e0
        mov dword ptr ds : [esi], edx
        jmp public_65d40e3
        public_65d40e0 : nop
        mov dword ptr ds : [esi+8], edx
        public_65d40e3 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_65d40ee : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_65d4101
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        je public_65d41ac
        public_65d4101 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_65d41df
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_65d4128
        mov dword ptr ds : [esi+4], ecx
        public_65d4128 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65d41c4
        mov dword ptr ds : [esi+4], edx
        jmp public_65d41d3
        public_65d4142 : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_65d4195
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_65d4168
        mov dword ptr ds : [esi+4], ecx
        public_65d4168 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65d417b
        mov dword ptr ds : [esi+4], edx
        jmp public_65d418a
        public_65d417b : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_65d4188
        mov dword ptr ds : [esi+8], edx
        jmp public_65d418a
        public_65d4188 : nop
        mov dword ptr ds : [esi], edx
        public_65d418a : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_65d4195 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_65d423b
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_65d423b
        public_65d41ac : nop
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_65d4083
        jmp public_65d42da
        public_65d41c4 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_65d41d1
        mov dword ptr ds : [esi+8], edx
        jmp public_65d41d3
        public_65d41d1 : nop
        mov dword ptr ds : [esi], edx
        public_65d41d3 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_65d41df : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_65d4209
        mov dword ptr ds : [esi+4], ecx
        public_65d4209 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65d4221
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_65d42d7
        public_65d4221 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_65d4231
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_65d42d7
        public_65d4231 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_65d42d7
        public_65d423b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_65d4289
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_65d425e
        mov dword ptr ds : [esi+4], ecx
        public_65d425e : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65d4271
        mov dword ptr ds : [esi+4], edx
        jmp public_65d427f
        public_65d4271 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_65d427c
        mov dword ptr ds : [esi], edx
        jmp public_65d427f
        public_65d427c : nop
        mov dword ptr ds : [esi+8], edx
        public_65d427f : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_65d4289 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_65d42b2
        mov dword ptr ds : [esi+4], ecx
        public_65d42b2 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65d42c5
        mov dword ptr ds : [esi+4], edx
        jmp public_65d42d4
        public_65d42c5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_65d42d2
        mov dword ptr ds : [esi+8], edx
        jmp public_65d42d4
        public_65d42d2 : nop
        mov dword ptr ds : [esi], edx
        public_65d42d4 : nop
        mov dword ptr ds : [edx+8], ecx
        public_65d42d7 : nop
        mov dword ptr ds : [ecx+4], edx
        public_65d42da : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x2C], bl
        public_65d42e1 : nop
        lea ecx, ds:[esi+0xC]
        call public_65d3930
        push esi
        call public_65d6cb8
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x65d3f30)
    }
}

#undef public_65d3f54
#undef public_65d3f72
#undef public_65d3f7d
#undef public_65d3f86
#undef public_65d3f91
#undef public_65d3faf
#undef public_65d3fc6
#undef public_65d3fd3
#undef public_65d3fde
#undef public_65d3fe1
#undef public_65d3ff9
#undef public_65d4004
#undef public_65d4007
#undef public_65d401e
#undef public_65d4029
#undef public_65d4034
#undef public_65d4037
#undef public_65d404d
#undef public_65d4059
#undef public_65d4065
#undef public_65d4068
#undef public_65d4083
#undef public_65d40c2
#undef public_65d40d5
#undef public_65d40e0
#undef public_65d40e3
#undef public_65d40ee
#undef public_65d4101
#undef public_65d4128
#undef public_65d4142
#undef public_65d4168
#undef public_65d417b
#undef public_65d4188
#undef public_65d418a
#undef public_65d4195
#undef public_65d41ac
#undef public_65d41c4
#undef public_65d41d1
#undef public_65d41d3
#undef public_65d41df
#undef public_65d4209
#undef public_65d4221
#undef public_65d4231
#undef public_65d423b
#undef public_65d425e
#undef public_65d4271
#undef public_65d427c
#undef public_65d427f
#undef public_65d4289
#undef public_65d42b2
#undef public_65d42c5
#undef public_65d42d2
#undef public_65d42d4
#undef public_65d42d7
#undef public_65d42da
#undef public_65d42e1
